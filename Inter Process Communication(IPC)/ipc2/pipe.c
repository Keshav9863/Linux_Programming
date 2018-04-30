#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd[2];
	//fd={0,1};
	pipe(fd);
	char buff[100];
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child Process\n");
		close(fd[1]);
		int n=read(fd[0],buff,100);
		write(1,buff,n);
		printf("\n");
	}
	else
	{
		printf("Parent Process\n");
		close(fd[0]);
		write(fd[1],"Lovely Professional University",30);
	}
}
