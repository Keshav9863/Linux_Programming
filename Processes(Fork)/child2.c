/*
					p1
				       /  \
				      c1  c2
*/
#include<unistd.h>
#include<stdio.h>
int main()
{
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child 1 Created\n  Child1_Id = %d  Parent_Id = %d\n",getpid(),getppid());
	}
	else
	{
		printf("Parent Process\n  Parent_Id = %d\n",getpid());
		pid_t p2=fork();
		if(p2==0)
		{
			printf("Child 2 Created\n  Child2_Id = %d  Parent_Id = %d\n",getpid(),getppid());
		}
	}
}
