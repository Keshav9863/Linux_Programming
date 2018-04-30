#include<stdio.h>
#include<pthread.h>
void *func()
{
	return 10;
}
int main()
{
	void **a;
	pthread_t p1;
	pthread_create(&p1,NULL,func,NULL);
	pthread_join(p1,a);
	printf("%d",a);
	return 0;
}
