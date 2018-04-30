#include<stdio.h>
#include<sys/shm.h>
#include<string.h>
#include<sys/ipc.h>
int main()
{
	void *shared_memory;
	int shmid=shmget((key_t)1234,1000,0777);
	shared_memory=shmat(shmid,NULL,0);
	printf("Data At shared Memory is:%s\n",shared_memory);
}
