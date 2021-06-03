//Implementation of Bubble Sort Sorting technique using arrays in C language
#include <stdio.h>
#include <stdlib.h>
//Global Variable
int n;
//Inputting elements of the array
void input(int a[50])
{
	printf("Enter the elements\n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
		display(a);
}
//Sorting the array
void sort(int a[50])
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				//Swapping the adjacent elements
				int t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
//displaying the array
void display(int a[50])
{
	int i;
	printf("The Array->\n\t");
	for(i=0;i<n;i++)
	{
		if(i==n-1)
			printf("%d",a[i]);
		else
			printf("%d\t",a[i]);
	}
}
//driver main function
int main()
{
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[50];
	input(a);
	sort(a);
	printf("\nAfter Sorting\n
	");
	display(a);
	return 1;
}
