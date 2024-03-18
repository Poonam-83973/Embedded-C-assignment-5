/*
	1. Write a program to accept marks of five subjects, calculate its total and average.
*/

#include<stdio.h>
int main()
{
	int arr[5]={95,89,95,96,82};
	
	int sum=0, avg;
	
	for(int i=0; i<5; i++)
	{
		printf("marks of %dth element = %d\n",i+1,arr[i]);
	}

	for(int i=0; i<5; i++)
		{
			sum=sum+arr[i];
		}
    	printf("The total of all subjects out of 500 is %d\n",sum);

		avg=sum/5;
		printf("The average of 5 subjects is %d\n",avg);

	return 0;
}
