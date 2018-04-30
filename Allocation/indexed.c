#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch,n,i,j,ind;
	int *fp=(int *)calloc(50,sizeof(int));
	int *index=(int *)calloc(50,sizeof(int));
	printf("Want to allocate memory(Yes->1/No->0):");
	scanf("%d",&ch);
	while(ch==1)
	{
		printf("Enter Index Block :");
		scanf("%d",&ind);
		if(index[ind]==0)
		{
			index[ind]=1;
			printf("Enter No of files on the Disk:");
			scanf("%d",&n);
		}
		else
		{
			printf("Index Block Already Allocated\n");
			goto a;
		}
		printf("Block nos to be allocated:");
		for(i=0;i<n;i++)
		{
			scanf("%d",&fp[i]);
		}
		for(i=0;i<n;i++)
		{
			if(index[fp[i]]==1)
			{
				printf("Block Already Allocated\n");
				goto a;
			}
		}
		for(i=0;i<n;i++)
		{
			index[fp[i]]=1;
		}
		printf("Allocated & File Indexed\n");
		for(i=0;i<n;i++)
		{
			printf("%d -> %d : %d\n",ind,fp[i],index[fp[i]]);
		}
		a:
		printf("Want to allocated memory(Yes->1/No->0):");
		scanf("%d",&ch);
	}
}
