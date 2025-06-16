#pragma once
#include<iostream>
#define Info 0
#define Debug 1
#define Warning 2
#define Error 3s
#define  Fatal 4
#define Screen 1
#define Onefile 2
#define Classfile 3
#define LogFile "log.txt"



using namespace std;
class Log(){
public:Log(){
    printMethod=Screen;
    path= "./log/";
}
void Enable(int method){
    printMethod=method;
}
 string levelToString(int level){
    switch(level){
case Info: return "Info";
case Debug:return "Debug";
case Warning:return "Warning";
case Error:return "Error";
case Fatal: return "Fatal";
case default: return "None";
    }
 }
void printLog(int level,string &logtxt){
switch(printMethod){
case Screen:  cout<<logtxt<<endl; break;
case Onefile: printOneFile(LogFile,logtxt); break;
case Classfile: printClassFile(level,logtxt); break;
}
}
void printOneFile(const string &logname,const string &logtxt){
string _Logname=path+logname;
int fd=(_logname.c_str(),O_WRONLY|O_CREAT|O_APPEND,0666);
if(fd<0)  return;
write(fd,logtxt.c_str,logtxt.size());
close(fd);
 }
 void printClassFile(int level,const string  &logtxt){
string filename=LogFile;
filename+= '.';
filename+=levelToString(level);
 }
 ~Log(){}



 void operator()(int level,const char * format,...){
    time_t=time(nullptr);
    struct tm *ctime=localtime(&t);
    char leftlogtxt[SIZE];
    snprintf(leftlogtxt,sizeof(leftlogtxt),"[%s][%d-%d-%d %d:%d:%d]", levelToString(level).c_str(),
                 ctime->tm_year + 1900, ctime->tm_mon + 1, ctime->tm_mday,
                 ctime->tm_hour, ctime->tm_min, ctime->tm_sec);
                 va_list s;
                 va_start(s,format);
                 char rightlogtxt[SIZE];
                 vsnprintf(rightlogtxt,sizeof(rightlogtxt),format,s);
                 va_end(s);
                 //格式是固定的左边部分+可变的右边部分
                 char logtxt[SIZE*2];
                 snprintf(logtxt,sizeof(logtxt),"%s %s\n",leftlogtxt,rightlogtxt);
                 printLog(level,logtxt);
 }
 private: int printMethod;
string path;
};



