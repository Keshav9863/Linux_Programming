#include<unistd.h>
#include<stdio.h>
#include<sys/types.h>
int main()
{
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child Process Created\n pid = %d  ppid = %d\n",getpid(),getppid());
	}
	else
	{
		printf("Parent Process\n pid = %d\n",getpid());
	}
}
