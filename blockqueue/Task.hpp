#pragma once
#include<iostream>
#inclue<string>


string opers="+-*/%";
enum{
    DivZero=1,
    ModZero,
    Unknown
};
class Task{
public:Task(int x,int y,char op):data1_(x),data2_(y),oper_(op),result_(0),exitcode_(0){}
void run(){
    switch(oper_){
        case '+':
        result_=data1_+data2_;
        break;
        case '-':
        result_=data1_-data2_;
        break;
        case '*':
        result_=data1_ * data2_;
        break;
        case '/':
        if(data2_==0){
        exitcode_=DivZero;        }
        else result_=data1_/data2_;
        break;
        case '%':
        if(data2_==0) {exitcode_=DivZero;}
        else result_=data1_%data2_;
        break;
        default:
        exitcode_=Unknown;
        break;
    }
}
void operator()(){
    run();
}
string GetResult(){
    string r=to_string(data1_);
     r+=oper_;
     r+=to_string(data2_);
     r+=to_string(result_);
     r+="[code:";
     r+=to_string(exitcode_);
     r+="]";
     return r;
}
string GetTask(){
    string r=to_string(data1_);
    r+=oper_;
    r+=to_string(data2_);
    r+="=?";
    return r;
}
~Task(){}


private:
int data1_;
int data2_;
int oper_;
int result_;
int exitcode_;
};