#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *a,alloc,block,ch,n,len,base,k,i;
	a=(int *)calloc(100,sizeof(int));
	printf("Enter No of Blocks that are already allocated:");
	scanf("%d",&alloc);
	printf("Enter Block nos that are allocated:\n");
	for(i=0;i<alloc;i++)
	{
		scanf("%d",&block);
		a[block]=1;
	}
	printf("Want to allocated Memory(1->Yes/0->No):");
	scanf("%d",&ch);
	while(ch==1)
	{
		printf("Enter Base and length of Block :\n");
		scanf("%d %d",&base,&len);
		k=len;
		if((base+len+alloc)>100)
		{
			printf("Not Enough Space in Memory\n");
			goto a;
		}
		alloc=alloc+(base+len);
		for(i=base;i<(k+base);i++)
		{
			if(a[i]==0)
			{
				a[i]=1;
				printf("Block %d Allocated\n",i);
			}
			else
			{
				printf("Block %d Already Allocated\n",i);
				k++;
			}
		}

		a:
		printf("Want To allocated Memory(Yes->1/No->0):");
		scanf("%d",&ch);
	}
}
