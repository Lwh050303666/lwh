#ifndef _COMM_HPP_
#define  _COMM_HPP_
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <sys/types.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "log.hpp"



using namespace std;
Log log;

const int size=4096;
const string pathname="/home/lwh/lwh/共享内存"
const int proj_id=1e3;
//创建共享内存
int getkey{
key_t t=ftok(pathname,proj_id);
if(t<0)  {
  log(Fatal,"ftok error:%s",strerror(errno));
  exit(1);
}
log(Info,"ftok success,the key is:%d",t);
return t;
}
int getsharememhelper(int flag){
  key_t t=getkey();
  int shmid=shmget(t,size,flag);
  if(shmid<0){
    log(Fatal,"create share memory  error;%s",strerror(errno));
    exit(2);
  }
  log(Info,"create share memory  success,shmid:%d",shmid);
  return shmid;
}
int createshm(){
  return  getsharememhelper(IPC_CREAT|IPC_EXCL|0666);
}
int getshm(){
 return getsharememhelper(IPC_CREAT);
}

//共享内存已创建完毕，接下来该搞有名管道进行通知了
#define FIFO_FILE "./myfifo"
#define  MODE 0664
enum{
  FIFO_CREAT_ERR =1,
  FIFO_DELETE_ERR,
  FIFO_OPEN_ERR
};
class Init(){
public:Init(){
  int n=mkfifo(FIFO_FILE,MODE);
  if(n<0)  {
    perror("mkfifo");  exit(FIFO_CREAT_ERR);
  }
}
~Init(){
     int m=unlink(FIFO_FILE);
     if(m<0){
      perror("unlink");
      exit(FIFO_DELETE_ERR);
     }
}

};
