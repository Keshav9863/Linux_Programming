/*
		p1
	       /  \
	     c1    c2
*/
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Parent_Id:%d\n",getpid());
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child1 Created\n  Parent_Id:%d  Child1_Id:%d\n",getppid(),getpid());
	}
	if(p1>0)
	{
		pid_t p2=fork();
		if(p2==0)
		{
			printf("Child2 Created\n  Parent_Id:%d  Child2_Id:%d\n",getppid(),getpid());
		}
	}
}
