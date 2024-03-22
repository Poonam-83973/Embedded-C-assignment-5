/*
	Q2. Write a function to accept array elements from the user. Write another function to print array
	elements.
*/


#include<stdio.h>

int accept_array(int limit)
{
	int arr[50];
	printf("---------------------\n");
	printf("enter the array element: \n");
	for(int i=0; i<limit; i++)
		scanf("%d",&arr[i]);
	
}

int print_array(int limit)
{
	printf("Array-------------------\n");
	int arr1[50];
	for(int i=0; i<limit; i++)
		printf("arr[%d]=%d\n",i,arr1[i]);
}
int main()
{
	int limit;
	printf("Enter the limit : ");
	scanf("%d",&limit);

	accept_array(limit);
	print_array(limit);

	return 0;
}
