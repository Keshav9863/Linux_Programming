#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t t1=fork();
	if(t1==0)
	{
		sleep(5);
		printf("Child Executing with Id = %d  & Parent_Id = %d\n",getpid(),getppid());
	}
	else
	{
		printf("Parent Executing with pid = %d\n",getpid());
	}
}
