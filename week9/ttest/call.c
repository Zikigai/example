#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main(){
printf("call=pid=%d,ppid=%d",getpid(),getppid());
system("/home/ikigai/1-1/ttest/test");
printf("after calling");
}
