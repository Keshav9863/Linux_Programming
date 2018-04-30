#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
int ctr=1;
pthread_mutex_t m;
void *func1()
{
	pthread_mutex_lock(&m);
	printf("Thread 1 Executing\n");
	int x=ctr;
	x=x+1;
	sleep(0.5);
	ctr=x;
	pthread_mutex_unlock(&m);
	printf("Thread 1 Completed\n");
}
void *func2()
{
	printf("Thread 2 Executing\n");
	pthread_mutex_lock(&m);
	int x=ctr;
	x=x-1;
	sleep(0.5);
	ctr=x;
	pthread_mutex_unlock(&m);
	printf("Thread 2 Completed\n");
}
int main()
{
	pthread_t p1,p2;
	pthread_create(&p1,NULL,func1,NULL);
	pthread_create(&p2,NULL,func2,NULL);
	pthread_join(p1,NULL);
	pthread_join(p2,NULL);
	printf("Counter Value = %d\n",ctr);
}
