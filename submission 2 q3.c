#include<stdio.h>
int remove_duplicates(int num[], int size) {
    if (size== 0) return 0; 

    int i,k = 1;  
    for ( i = 1; i < size; i++) {
        if (num[i] != num[k-1]) {
            num[k] = num[i];  
            k++;
        }
    }
    return k;  
}
int main() {
    int len,i;
    printf("Enter the number of elements you want to enter:\n");
    scanf("%d",&len);
    int num[len];
    for(i=0;i<len;i++)
    {
    	printf("Enter element %d\n",i+1);
    	scanf("%d",&num[i]);
	}
	printf("\nOriginal Array:");
    for(i=0;i<len;i++)
    {
    	printf("%2d",num[i]);
	}

    int k = remove_duplicates(num, len);

    printf("\nNumber of unique elements: %d\n", k);
    printf("Array after removing duplicates:\n ");
    for (i = 0; i < k; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

