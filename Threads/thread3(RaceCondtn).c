#include<pthread.h>
#include<stdio.h>
#include<unistd.h>
int ctr=1;
void *func1()
{
	printf("Thread 1 Executing\n");
	int x = ctr;
	x = x+1;
	sleep(0.5);
	ctr=x;
	printf("Thread 1 Executed\n");
}
void *func2()
{
	printf("Thread 1 Executing\n");
	int x = ctr;
	x = x-1;
	sleep(0.5);
	ctr=x;
	printf("Thread 2 Executed\n");
}
int main()
{
	pthread_t p1,p2;
	pthread_create(&p1,NULL,func1,NULL);
	pthread_create(&p2,NULL,func2,NULL);
	pthread_join(p1,NULL);
	pthread_join(p2,NULL);
	printf("Counter value is :%d\n",ctr);
}
