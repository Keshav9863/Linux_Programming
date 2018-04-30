#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("Enter length :");
	scanf("%d",&n);
	char *buff=(char *)malloc(n*sizeof(char));
	read(0,buff,n);
	write(1,"Value is :",10);
	write(1,buff,n);
}
