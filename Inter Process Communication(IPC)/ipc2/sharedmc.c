#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
int main()
{
	int shmid=shmget((key_t)5000,1000,0777|IPC_CREAT);
	void *sharedm=shmat(shmid,NULL,0);
	pid_t p1=fork();
	if(p1==0)
	{
		printf("Child Process\n");
		printf("%s\n",sharedm);
	}
	else
	{
		printf("Parent Process\n");
		char *msg="Chalo iska bhi ho gaya";
		strcpy(sharedm,msg);
	}
}
