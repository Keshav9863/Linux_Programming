/*
		p1
		|
		c1
		|
		c2
*/
#include<unistd.h>
#include<stdio.h>
int main()
{
	printf("Parent_Id: %d\n",getpid());
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child 1 Created\n  Parent_id:%d  Child1_Id:%d\n",getppid(),getpid());
		pid_t p2=fork();
		if(p2==0)
		{
			printf("Child 2 Created\n  Parent_id:%d  Child2_Id:%d\n",getppid(),getpid());
		}
	}
}
