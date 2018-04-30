#include<stdio.h>
#include<unistd.h>
int main()
{
	pid_t p1;
	p1=fork();
	if(p1==0)
	{
		
	}
	else
	{
		char *buff="Lovely Professional University";
		popen("wc","w");
		fwrite(buff,)
	}
}
