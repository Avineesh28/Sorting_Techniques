#include <stdio.h>
int n;
void input(int a[50])
{
	printf("Enter the elements\n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void swap(int *a, int *b)
{   
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int array[], int low, int high)
{
    int pivot = array[high];
	int i = (low - 1);
	int j;
	for (j=low;j<high;j++)
	{
	    if (array[j] <= pivot)
		{
			i++;
			swap(&array[i], &array[j]);
	    }
   }
   swap(&array[i + 1], &array[high]);
   return (i + 1);
}
void quickSort(int array[], int low, int high)
{
   if (low < high)
   {
        
		int pi = partition(array, low, high);     
		quickSort(array, low, pi - 1); 
		quickSort(array, pi + 1, high);
   }
} 
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
int main()
{
	printf("Enter the number of elements\n");
	scanf("%d",&n);
	int a[50];
	input(a);
	quickSort(a,0,n-1); 
	display(a);
	return 1;
}
