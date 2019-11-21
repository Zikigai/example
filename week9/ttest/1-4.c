#include "my.h"
static void callback()
{
printf("------callback-------\n");
}
tatic void callback2()
{
printf("\n-------callback2-------\n");
}
printf("\n-------callback2-------\n");
printf("\n-------callback2-------\n");
}
static void _attrbute_ ((constructor)) before_main()
{printf("\n------constructor------\n");
}
static void _attribute_ ((destructor)) after_main()
 int main()
{
atexit(callback1);
atexit(callback2);
FILE *fp;
char buf[]={"test data from full buffer!\n"};
if((fp=fopen("test.dat","w+"))==NULL)
{
perror("failed to fopen!\n");
return -1;
}
if(fputs(buf,fp)==EOF)
{
perror("failed to fputs!\n");
return -1;
}
printf("printf:data from line buffer\n");
//exit(0);
_exit(0);
//return 0;

}
