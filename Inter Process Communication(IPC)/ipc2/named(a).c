#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>
int main()
{
	mkfifo("pipe2",0777);
	int des=open("pipe2",O_WRONLY);
	write(des,"Lovely Professional University",30);
}
