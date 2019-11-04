#include<unistd.h>
#include<iostream>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
using namespace std;
int main(){
int fd;
FILE* file;
char *s="hello world\n";
if(fd=open("test.txt",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR))==-1{
count<<"error open file"<<endl;
return -1;
}
if(fd=open("test2.txt","w+",O_WRONLY|O_CREAT,S_IRUSR|S_IWUSR))==-1{
count<<"error open file"<<endl;
return -1;
}
count<<"file has been opened."<<endl;
sleep(15);
if(write(fd,s,strlen(s))<srelen(s)){
count<<"write error"<<endl;
}
if(fwrite(s,sizeof(char),))

