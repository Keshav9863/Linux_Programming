#include<stdio.h>
#include<dirent.h>
#include<unistd.h>
int main()
{
	DIR *dr;
	dr=mkdir("/root/Desktop/keshav",0777);
	if(dr==NULL)
	{
		printf("Error Making File");
	}
}
