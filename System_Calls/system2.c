#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<dirent.h>
struct dirent *dr;
int main()
{
	DIR *dir;
	dir=opendir(".");  // Opening current Directory
	if(dir==NULL)
	{
		printf("Error Opening directory\n");
	}
	while((dr=readdir(dir))!=NULL)
	{
		printf("%s\n",dr->d_name);
	}
	closedir(dir);
}
