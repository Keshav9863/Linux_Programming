#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	char buff[100],ch[2];
	int i;
	int fp=open("seek.txt",O_RDWR,0770);
	int n=read(fp,buff,100);
	int mid=n/2;
	lseek(fp,0,SEEK_SET);
	for(i=0;i<mid;i++)
	{
		lseek(fp,1,SEEK_CUR);
		read(fp,ch,1);
		write(1,ch,1);
	}
}
