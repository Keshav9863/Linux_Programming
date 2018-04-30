#include<pthread.h>
#include<stdio.h>
struct data
{
	int data1;
	int data2;
}obj;
void *func(void *arg)
{
	struct data *obj1=arg;
	int sum=obj1->data1+obj1->data2;
	printf("Sum is :%d\n",sum);
}
int main()
{
	printf("Enter the values to add:");
	scanf("%d %d",&obj.data1,&obj.data2);
	pthread_t p1;
	pthread_create(&p1,NULL,func,&obj);
	pthread_join(p1,NULL);
}
