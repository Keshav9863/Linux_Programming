#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
int main()
{
	int n;
	char buff[20];
	mkfifo("pipe2",0777);
	int des=open("pipe2",O_WRONLY);
	/*printf("Enter length of string:");
	scanf("%d",&n);
	printf("Enter String :");
	scanf("%d",buff);*/
	write(des,"Message from child",18);
}
