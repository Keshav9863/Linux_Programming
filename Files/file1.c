#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
	char buff[100];
	int fp;
	int n = read(0,buff,100);
	fp=open("abc.txt",O_CREAT|O_RDWR,770);
	write(fp,buff,n);
	close(fp);
}
