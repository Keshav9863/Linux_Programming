#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child Process\n  Child_Id = %d  Parent_Id = %d\n",getpid(),getppid());
	}
	else
	{
		sleep(10);
		printf("Parent Process with id = %d\n",getpid());
		//system("ps -a");
	}
}
