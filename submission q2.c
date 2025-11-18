#include<stdio.h>
#include<string.h>
void reverse(char str[],int size)
{
	int i,temp;
	for(i=0;i<size/2;i++)
	{
		temp=str[i];
		str[i]=str[size-i-1];
		str[size-i-1]=temp;
	}
}
int main()
{
	char str[50];
	printf("Enter a string : \n");
	gets(str);
	int length;
	length=strlen(str);
	reverse(str,length);
	printf("Reversed string is : %s",str);
}
