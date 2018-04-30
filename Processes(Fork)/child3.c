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
	pid_t t1=fork();
	if(t1==0)
	{
		printf("Child1 Created\n  Child_Id = %d  Parent_Id = %d\n",getpid(),getppid());
		pid_t t2=fork();
		if(t2==0)
		{
			printf("Child2 Created\n  Child_Id = %d  Parent_Id = %d\n",getpid(),getppid());
		}
	}
	else
	{
		printf("Parent Process\n  Parent_id = %d\n",getpid());
	}
}
