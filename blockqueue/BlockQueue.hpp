#pragma once
#include<iostream>
#include<pthread.h>
#include<queue>



using namespace std;
template<T>
class BlockQueue{
    static const int defaultnum=20;
public: BlockQueue(int maxcap=defaultnum):maxcap_(maxcap){
pthread_mutex_init(&mutex,nullptr);
pthread_cond_init(&c_cond_,nullptr);
pthread_cond_init(&p_cond_,nullptr);
}
T & pop(){
    pthread_mutex_lock(&mutex_);
    while(q_.size()==0)  //判断临界资源是否满足本质上也是在访问临界资源 
    {
    pthread_cond_wait(&c_cond_);
    }
T out=q_.front();
q_.pop();
pthread_cond_signal(&p_cond_);
pthread_mutex_unlock(&mutex_);
return out;
}
void push(const T&in){
    pthread_mutex_lock(&mutex_);
   while(q_.size()==maxcap_){  //这里为什么要用while  因为线程可能会出现伪唤醒和惊群现象  必须使用while来持续判断  确保这是由于queue的元素数量变化引起的
        pthread_cond_wait(&p_cond_,&mutex_);
    }
    //走到这里有两种情况 1.队列没满  2.被唤醒了
    q_.push(in);
    pthread_cond_signal(&c_cond_);
    pthread_mutex_unlock(&mutex_);
    }

~BlockQueue(){
    pthread_mutex_destory(&mutex_);
    pthread_cond_destroy(&c_cond_);
    pthread_cond_destroy(&p_cond_);

}

private:
queue<T>q_; //这是一个共享资源  作为队列使用
int maxcap_;
pthread_mutex_t mutex_;
pthread_cond_t c_cond_;
pthread_cond_t p_cond_;
};