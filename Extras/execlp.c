#include<unistd.h>
#include<stdio.h>
int main()
{
	printf("Hello \n");
	//execlp("/bin/ls","ls","-al",NULL);
	execlp("/bin/mkdir","mkdir","keshav",NULL);
	//execlp("/bin/ls","ls","-al",NULL);
}
