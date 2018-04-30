#include<stdio.h>
#include<unistd.h>
#include<sys/shm.h>
#include<string.h>
int main()
{
	char buff[20];
	void *shared_memory;
	int shmid=shmget((key_t)1234,1000,0777 | IPC_CREAT);
	shared_memory=shmat(shmid,NULL,0);
	printf("Shared Memory Id Created :%d\n",shmid);
	printf("Enter Some data to the memory :\n");
	read(0,buff,100);
	strcpy(shared_memory,buff);
	printf("You Wrote :%s\n",buff);
}
