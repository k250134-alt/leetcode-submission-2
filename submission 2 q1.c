#include<stdio.h>
void zero(int num[],int size)
{
	int i,j=0,temp;
	for(i=0;i<size;i++)
	{
		if(num[i]!=0)
		{
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
			j++;
		}
	}
}
int main()
{
	int num[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter element %d\n",i+1);
		scanf("%d",&num[i]);
	}
	printf("\nORIGINAL ARRAY\n");
	for(i=0;i<5;i++)
	{
		printf("%d",num[i]);
		if(i<4)
		{
			printf(",");
		}
	}
	zero(num,5);
	printf("\nFinal array\n");
	for(i=0;i<5;i++)
	{
		printf("%d",num[i]);
		if(i<4)
		{
			printf(",");
		}
	}
	
}
