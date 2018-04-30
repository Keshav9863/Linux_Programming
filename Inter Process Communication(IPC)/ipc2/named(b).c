#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
	char buff[100];
	int des=open("pipe2",O_RDONLY);
	int n = read(des,buff,100);
	write(1,buff,n);
	printf("\n");
}
