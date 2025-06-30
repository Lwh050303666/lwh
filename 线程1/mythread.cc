#include<iostream>
using namespace std;
#define NUM 4


class threadData{
    public:threadData(int nubmer){
        threadname="thread-"+to_string(number);
    }
    public: string threadname;
};
int tickets=1000;
void * getTicket(void * args){
    threadData * td=static_cast<threadData *>(args);
    const char * name=td->threadname.c_str();
    while(true){
        if(tickets>0){
            usleep(1000);
            printf("who=%s,get a ticket:%d\n",name,tickets);
            tickets--;
        }
        else break;
    }
    printf("%s..quit\n",name);
    return nullptr;
}

int main(){
vector<pthread_t>tids;
vector<threadData *>thread_datas;
for(int i=1;i<NUM;i++){
    pthread_t tid;
    threadData *td=new threadData(i);
    thread_datas.push_back(td);
pthread_create(&tid,nullptr,getTicket,thread_datas[i-1]);
tids.push_back(tid);
}
}