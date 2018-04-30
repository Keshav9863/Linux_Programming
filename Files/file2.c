#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	int fd;
	char buff[100];
	fd=open("abc.txt",O_CREAT|O_RDWR,777);
	int n=read(fd,buff,100);
	write(1,buff,n);
}
