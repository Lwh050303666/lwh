// #include <iostream>
// #include <unistd.h>
// #include <signal.h>
// #include <sys/types.h>
// #include <sys/wait.h>

// using namespace std;

// int main()
// {
//     // signal(2, SIG_IGN);
//     signal(2, SIG_DFL);

//     while(1)
//     {
//         cout << "hello signal" << endl;
//         sleep(1);
//     }

//     // int a = 10;
//     // int b = 0;

//     // a /= b;


//     // cout << " a = " << a << endl;

//     // pid_t id = fork();
//     // if(id == 0)
//     // {
//     //     //child
//     //     int cnt = 500;
//     //     while(cnt)
//     //     {
//     //         cout << "i am a child process, pid: " << getpid() << "cnt: " << cnt << endl;
//     //         sleep(1);
//     //         cnt--;
//     //     }

//     //     exit(0);
//     // }

//     // // father
//     // int status = 0;
//     // pid_t rid = waitpid(id, &status, 0);
//     // if(rid == id)
//     // {
//     //     cout << "child quit info, rid: " << rid << " exit code: " << 
//     //         ((status>>8)&0xFF) << " exit signal: " << (status&0x7F) <<
//     //             " core dump: " << ((status>>7)&1) << endl; // ? & (0000 0000 ... 0001)
//     // }
// }



#include <iostream>
#include <unistd.h>
#include <signal.h>

using namespace std;

void PrintPending(sigset_t &pending){
    for(int signo=31;signo>=1;signo--){
        if(sigismember(&pending,signo)){
            cout<<"1";
        }
        else{cout<<"0";}
    }
    cout<<"\n\n";
}
void handler(int signo){
    cout<<"catch a signo:"<<signo<<endl;
}
int main(){
    //4.我可以将所有的信号都进行屏蔽从而让所有信号都得不到处理吗?  不是的
    sigset_t bset,oset;
    sigemptyset(&bset);
    sigemptyset(&oset);
    for(int i=1;i<=31;i++){
        sigaddset(&bset,i);
    }
    sigprocmask(SIG_SETMASK,&bset,&oset);
    sigset_t pending;
    while(true){
        //获取
        int n=sigpending(&pending);
        if(n<0)  continue;
        //打印
        PrintPending(pending);
sleep(1);
    }
    signal(2,handler);
   
    // // 1. 先对2号信号进行屏蔽 --- 数据预备
    // sigset_t bset, oset; // 在哪里开辟的空间？？？用户栈上的，属于用户区
    // sigemptyset(&bset);
    // sigemptyset(&oset);
    // sigaddset(&bset, 2); // 我们已经把2好信号屏蔽了吗？并没有设置进入到你的进程的task_struct
    // // 1.2 调用系统调用，将数据设置进内核
    // sigprocmask(SIG_SETMASK, &bset, &oset); // 我们已经把2好信号屏蔽了吗？ok

    // // 2. 重复打印当前进程的pending 0000000000000000000000000
    // sigset_t pending;
    // int cnt = 0;
    // while (true)
    // {
    //     // 2.1 获取
    //     int n = sigpending(&pending);
    //     if (n < 0)
    //         continue;
    //     // 2.2 打印
    //     PrintPending(pending);

    //     sleep(1);
    //     cnt++;
    //     // 2.3 解除阻塞
    //     if(cnt == 20)
    //     {
    //         cout << "unblock 2 signo" << endl;
    //         sigprocmask(SIG_SETMASK, &oset, nullptr); // 我们已经把2好信号屏蔽了吗？ok
    //     }
    // }
    // // 3 发送2号 0000000000000000000000010

    return 0;
}



#include <iostream>
#include <cstring>
#include <ctime>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>

using namespace std;

// 必须得等待吗？？？必须得调用 wait吗？？
// void handler(int signo)
// {
//     sleep(5);
//     pid_t rid;
//     while ((rid = waitpid(-1, nullptr, WNOHANG)) > 0)
//     {
//         cout << "I am proccess: " << getpid() << " catch a signo: " << signo << "child process quit: " << rid << endl;
//     }
// }

int main()
{
    signal(17, SIG_IGN); // SIG_DFL -> action -> IGN

    // srand(time(nullptr));
    // signal(17, handler);
    // 如果我们有10个子进程呢？？如果同时退出呢？
    // 如果退出一半呢？
    for (int i = 0; i < 10; i++)
    {
        pid_t id = fork();
        if (id == 0)
        {
            while (true)
            {
                cout << "I am child process: " << getpid() << ", ppid: " << getppid() << endl;
                sleep(5);
                break;
            }
            cout << "child quit!!!" << endl;
            exit(0);
        }
        // sleep(rand()%5+3);
        sleep(1);
    }
    // father
    while (true)
    {
        cout << "I am father process: " << getpid() << endl;
        sleep(1);
    }

    return 0;
}

// volatile int flag = 0;

// void handler(int signo)
// {
//     cout << "catch a signal: " << signo << endl;
//     flag = 1;
// }

// int main()
// {
//     signal(2, handler);
//     // 在优化条件下， flag变量可能被直接优化到CPU内的寄存器中
//     while(!flag); // flag 0, !falg 真

//     cout << "process quit normal" << endl;
//     return 0;
// }

// 问题1： pending位图，什么时候从1->0. 执行信号捕捉方法之前，先清0，在调用
// 问题2： 信号被处理的时候，对应的信号也会被添加到block表中，防止信号捕捉被嵌套调用

// void PrintPending()
// {
//     sigset_t set;
//     sigpending(&set);

//     for (int signo = 1; signo <= 31; signo++)
//     {
//         if (sigismember(&set, signo))
//             cout << "1";
//         else
//             cout << "0";
//     }
//     cout << "\n";
// }

// void handler(int signo)
// {
//     cout << "catch a signal, signal number : " << signo << endl;
//     while (true)
//     {
//         PrintPending();
//         sleep(1);
//     }
// }

// int main()
// {
//     // struct sigaction act, oact;
//     // memset(&act, 0, sizeof(act));
//     // memset(&oact, 0, sizeof(oact));

//     // sigemptyset(&act.sa_mask);
//     // sigaddset(&act.sa_mask, 1);
//     // sigaddset(&act.sa_mask, 3);
//     // sigaddset(&act.sa_mask, 4);
//     // act.sa_handler = handler; // SIG_IGN SIG_DFL
//     // sigaction(2, &act, &oact);

//     // while (true)
//     // {
//     //     cout << "I am a process: " << getpid() << endl;
//     //     sleep(1);
//     // }

//     return 0;
// }