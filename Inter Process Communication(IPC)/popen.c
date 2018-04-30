#include<stdio.h>
//#include<stdlib.h>
#include<unistd.h>
int main()
{
	FILE *fp;
	pid_t p1=fork();
	if(p1==0)
	{
		/*printf("Child Process\n");
		char buff1[100];
		fp=popen("ls","r");
		fread(buff1,500,1,fp);
		printf("%s",buff1);*/
	}
	else
	{
		printf("Parent Process\n");
		char *buff="Lovely Professional University\n";
		fp=popen("wc","w");
		fwrite(buff,500,1,fp);
	}
}
