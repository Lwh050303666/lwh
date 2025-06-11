#include<iostream>
#include"comm.hpp"
using namespace std;
int main(){
    int fd=open(FIFO_FILE,O_WRONLY);//以写的方式打开该管道
    if(fd<0){
        perror("open");  exit(FIFO_OPEN_ERR);
    }
    cout<<"clinet open file done"<<endl;
    string line;
    while(true){
cout<<"Please Enter@";
getline(cin,line);
write(fd,line.c_str(),line.size());
    }
    close(fd);
    return 0;
}












