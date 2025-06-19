#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int main() {
    printf("pid is : %d\n", getpid());

    // 故意触发 SIGQUIT，会导致进程退出并产生 core
    while (1) {
        sleep(1);
    }

    return 0;
}
