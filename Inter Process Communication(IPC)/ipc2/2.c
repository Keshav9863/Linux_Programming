#include<stdio.h>
#include<sys/shm.h>
#include<sys/ipc.h>
#include<unistd.h>
int main()
{
	void *sharedm;
	int shmid=shmget(1235,1000,0777);
	sharedm = shmat(shmid,NULL,0);
	printf("%s",sharedm);
}
