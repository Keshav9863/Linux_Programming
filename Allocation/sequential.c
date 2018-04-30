#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int base,len;
	int *a,i;
	int flag=0,ch;
	a=(int *)calloc(50,sizeof(int));
	printf("Want to allocate memory(Yes->1/No->0):");
	scanf("%d",&ch);
	while(ch!=0)
	{
		printf("Enter Base and length of Block \n");
		scanf("%d %d",&base,&len);
		if((base+len)>50)
		{
			printf("Not Enough Memory\n");
			goto a;
		}
		for(i=base;i<(base+len);i++)
		{
			if(a[i]==0)
			{
				a[i]=1;
			}
			else
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			printf("Successfully Allocated\n");
		}
		else
		{
			printf("Allocation Failed As Block are not contiguous or Blocks are Allocated\n");
		}
		a:
		printf("Want to Allocate Memory(Yes->1/No->0):");
		scanf("%d",&ch);
	}
}
