#include "comm.hpp"
extern Log log;
int main(){
Init init;
int shmid=createshm();
char * shmaddr=shmat(shmid,NULL,0);
int fd=open(FIFO_FILE,O_WRONLY);
if(fd<0){
    log(Fatal,"error string:%s,error code:%d",strerror(errno),errno);
    exit(FIFO_OPEN_ERR);
}//
struct shmid_ds shmds;
while(true){
    char c;
    ssize_t s=read(fd,&c,1);
    if(s==0|-1) break;
    cout<< "client say@"<<shmaddr<<endl;//直接访问共享内存  这种方式就可以进行打印   不需要其他矫揉造作的操作
    sleep(2);
    shmctl(shmid,IPC_STAT,&shmds);
    cout << "shm size: " << shmds.shm_segsz << endl;
        cout << "shm nattch: " << shmds.shm_nattch << endl;
        printf("shm key: 0x%x\n",  shmds.shm_perm.__key);
        cout << "shm mode: " << shmds.shm_perm.mode << endl;s
}
shmdt(shmaddr);
shmctl(shmid,IPC_RMID,nullptr);
close(fd);
return 0;
}