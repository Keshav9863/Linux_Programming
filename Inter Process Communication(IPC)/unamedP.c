#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd[2]={0,1};
	pipe(fd);
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child Process\n");
		char buff[50];
		close(fd[1]);
		write(1,"Message Read by child :",23);
		int n=read(fd[0],buff,50);
		write(1,buff,n);
		printf("\n");
	}
	else
	{
		printf("Parent Process\n");
		close(fd[0]);
		write(fd[1],"Hi P1 your mother is calling",28);
	}
}
