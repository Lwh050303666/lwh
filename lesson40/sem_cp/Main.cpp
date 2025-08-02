#include<iostream>
#include<pthread.h>
#include<unistd.h>
#include<ctime>
#include "RingQueue.hpp"
#include "Task.hpp"
using namespace std;

struct ThreadData
{RingQueue<Task>*rq; 
string  threadname;
};
 
 void * Productor(void * args){
    ThreadData * td=static_cast<ThreadData *>(args);
    RingQueue<Task>*rq=td->rq;
    string name=td->threadname;
    int len=opers.size();
    while(true){
        int data1=rand()%10+1;
        usleep(10);
        int data2=rand()%10;
        char op=opers[rand()%len];
        Task t(data1,data2,op);
        rq->Push(t);
        cout<<"Productor task done,task is:"<<t.GetTask()<<"who:"<<name<<endl;
        sleep(1);
    }
    return nullptr;
 }
 void * Consumer(void * args){
ThreadData *td=static_cast<ThreadData *>(args); //我要打破命运的枷锁  它绝不能使我屈服
RingQueue<Task>*rq=td->rq;
    string name=td->threadname;
    while(true){
        Task t;
        rq->Pop(&t);
        t();
        cout<<"Consumer get task,task is:"<<t.GetTask()<<"who:"<<name<<"result:"<<t.GetResult()<<endl;
    }
return nullptr;

 }



int main(){
srand(time(nullptr));
RingQueue<Task> *rq=new RingQueue<Task>(50);
pthread_t c[5],p[3];
for(int i=0;i<1;i++){
    ThreadData * td=new ThreadData();
    td->rq=rq;
    td->threadname="Productor-"+to_string(i);
    pthread_create(p+i,nullptr,Productor,td);
}
for(int i=0;i<1;i++){
    ThreadData * td=new ThreadData();
    td->rq=rq;
    td->threadname="Consumer"+to_string(i);
    pthread_create(c+i,nullptr,Consumer,td);
    }
for(int i=0;i<1;i++){
    pthread_join(p[i],nullptr);
}

for(int i=0;i<1;i++)  pthread_join(c[i],nullptr);

return 0;                     
}