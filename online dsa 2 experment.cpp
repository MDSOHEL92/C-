#include<stdio.h>
#include<conio.h>
  // EXPERMENT 2 DSA 2024?
int main()
{
	int i,n,del,arr[10];
	printf("enter the size of array :");
	scanf("%d",&n);
	
	printf("enter the element in the array");
	for(i=0; i<n; i++)
	{
		printf("arr[%d]=" ,i);
		scanf("%d",&arr[i]);
	}
	printf("enter the the element to be deleted:\n");
	scanf("%d",&del);
	if(del>=n+1)
	{
		printf("\n deletion is not posible");
	}
	else
	{
		for(i=0; i<n-1; i++)
		arr[i]= arr[i+1];
		printf("the array after delection ");
		for(i=0; i<n-1; i++)
		printf("%d",&arr[i]);
	}
	return 0;
}
