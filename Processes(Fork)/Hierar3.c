/*
			p1
		       /  \
		      c1  c2
			 /  \
			c3  c4
*/
#include<stdio.h>
#include<unistd.h>
int main()
{
	printf("Parent_Id:%d\n",getpid());
	pid_t p1,p2,p3,p4;
	p1=fork();
	if(p1==0)
	{
		printf("Child1 Created\n  Parent_Id:%d  Child1_Id:%d\n",getppid(),getpid());
	}
	if(p1>0)
	{
		p2=fork();
		if(p2==0)
		{
			printf("Child2 Created\n  Parent_Id:%d  Child2_Id:%d\n",getppid(),getpid());
			p3=fork();
			if(p3==0)
			{
				printf("Child3 Created\n  Parent_Id:%d  Child3_Id:%d\n",getppid(),getpid());
			}
			if(p3>0)
			{
				p4=fork();
				if(p4==0)
				{
					printf("Child4 Created\n Parent_Id:%d  Child4_Id:%d\n",getppid(),getpid());
				}
			}
		}
	}
}
