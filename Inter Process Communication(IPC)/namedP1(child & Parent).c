#include<stdio.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>
int main()
{
	int des;
	mkfifo("pipe1",0777);
	pid_t p1=fork();
	if(p1==0)
	{
		char buff[50];
		des=open("pipe1",O_RDONLY);
		int n=read(des,buff,50);
		write(1,"Message From Child :",20);
		write(1,buff,n);
		printf("\n");
	}
	else
	{
		des=open("pipe1",O_WRONLY);
		write(des,"Hi p1 this is your Parent",25);
	}
}
