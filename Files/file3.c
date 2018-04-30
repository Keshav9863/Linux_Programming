#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
int main()
{
	char buff[100];
	char ch;
	int fp=open("seek.txt",O_RDWR,770);
	lseek(fp,7,SEEK_SET);
	int n=read(fp,buff,100);
	write(1,buff,n);
	close(fp);
}
