#include "Task.hpp"
#include "BlockQueue.hpp"
#include<unistd.h>
#include<ctime>

void * Consumer(void * args){
BlockQueue<Task>*bq=static_cast<BlockQueue<Task> *>(args);
while(true){
    Task t=bq->pop();
    t();
    cout<<"处理任务"<<t.GetTask()<<"运算结果是："<<t.GetResult()<<"thread id:"<<pthread_self()<<endl;
}
}

void * productor(void* args){
int len=opers.size();
BlockQueue<Task>*bq=static_cast<BlockQueue<Task> *>(args);
int x=10,y=20;
while(true){
    int data1=rand()%10+1;
    usleep(10);
    int data2=rand()%10;
    char op=opers[rand()%len];
    Task t(data1,data2,op);
    //生产
    bq->push(t);
    cout<<"生产了一个任务:"<<t.GetTask()<<"thread id"<<pthread_self()<<endl;
    sleep(1);
}
}
int main(){
srand(time(nullptr));
BlockQueue<Task>*bq=new BlockQueue<Task>();
pthread_t c[3],p[5];
for(int i=0;i<3;i++){
    pthread_create(c+i,nullptr,Consumer,bq);
}
for(int i=0;i<5;i++){
    pthread_create(p+i,nullptr,Protector,bq);
    }
    for(int i=0;i<3;i++){
        pthread_join(c[i],nullptr);
    }
    for(int i=0;i<5;i++){
        pthread_join(p[i],nullptr);
    }
    delete bq;
    return 0;
}