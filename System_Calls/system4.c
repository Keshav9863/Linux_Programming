#include<stdio.h>
#include<dirent.h>
#include<unistd.h>
struct dirent *dir;
int main()
{
	DIR *dr;
	dr=mkdir("/root/Desktop/file",777);
	//dr=opendir("/root/bin/nano");
	dr=opendir("/root/Desktop/file/");
	while((dir=readdir(dr))!=NULL)
	{
		printf("%d  %s\n",dir->d_ino,dir->d_name);
	}
}
