#include<stdio.h>
#include<unistd.h>
#include<sys/ipc.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
	void *sharedm;
	int shmid=shmget((key_t)1235,1000,0777 | IPC_CREAT);
	sharedm=shmat(shmid,NULL,0);
	char *buff="Finally Ban Gaya BC";
	strcpy(sharedm,buff);
}
