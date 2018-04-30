#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>
#include<unistd.h>
int ctr=1;
sem_t s;
void *func1()
{
	sem_wait(&s);
	printf("Thread 1 Executing\n");
	int x=ctr;
	x=x+1;
	sleep(1);
	ctr=x;
	sem_post(&s);
	printf("Thread 1 Completed\n");
}
void *func2()
{
	sem_wait(&s);
	printf("Thread 2 Executing\n");
	int x=ctr;
	x=x-1;
	sleep(1);
	ctr=x;
	sem_post(&s);
	printf("Thread 2 Completed\n");
}
int main()
{
	sem_init(&s,0,1);
	pthread_t p1,p2;
	pthread_create(&p1,NULL,func1,NULL);
	pthread_create(&p2,NULL,func2,NULL);
	pthread_join(p1,NULL);
	pthread_join(p2,NULL);
	printf("Counter Value = %d\n",ctr);
}
