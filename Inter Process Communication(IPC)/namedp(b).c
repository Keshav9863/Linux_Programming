#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	char buff[50];
	int des,n;
	des=open("pipe2",O_RDONLY);
	n=read(des,buff,50);
	write(1,"Mssge :",7);
	write(1,buff,n);
	printf("\n");
}
