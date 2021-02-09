#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,m,i;
	printf("enter size of the array\n");
	scanf("%d",&m);
	int *arr=(int *)malloc(m*sizeof(int));
	printf("enter the elements in the array\n");
	for(i=0;i<m;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be search\n");
	scanf("%d",&n);
	while(m>=0)
	{
		if(arr[m]==n)
		printf("element %d is found at %d position",n,m+1);
		m--;
	}
}
