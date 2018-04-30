#include<pthread.h>
#include<stdio.h>
void *fun()
{
	printf("This is thread executing\n");
}
int main()
{
	pthread_t p1;
	pthread_create(&p1,NULL,fun,NULL);
	pthread_join(p1,NULL);
}
