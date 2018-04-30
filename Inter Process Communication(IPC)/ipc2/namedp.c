#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int fd;
	mkfifo("pipe1",0777);
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child Process\n");
		char buff[100];
		fd=open("pipe1",O_RDONLY);
		int n = read(fd,buff,100);
		write(1,buff,n);
		printf("\n");
	}
	else
	{
		printf("Parent Process\n");
		fd=open("pipe1",O_WRONLY);
		write(fd,"Lovely Professional University",30);
	}
}
