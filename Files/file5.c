#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	char ch[2];
	int fp=open("seek.txt",O_RDWR,0770);
	lseek(fp,0,SEEK_END);
	int n=lseek(fp,-2,SEEK_CUR);
	printf("%d",n);
	while(n!=-1)
	{
		read(fp,ch,1);
		write(1,ch,1);
		lseek(fp,-2,SEEK_CUR);
		n--;
	}
}
