#include<stdio.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<unistd.h>
#include<string.h>
int main()
{
	char buff[100];
	void *sharedm;
	int shmid=shmget((key_t)1234,1000,0777 | IPC_CREAT);
	sharedm=shmat(shmid,NULL,0);
	int n;
	scanf("%d",&n);
	read(0,buff,n);
	strcpy(sharedm,buff);
}
