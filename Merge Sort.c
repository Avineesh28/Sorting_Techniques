//Implementation of Merge Sort Sorting technique using arrays in C language
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
//Forming and returning sorted arrays using merge sort
void merge(int arr[], int l, int m, int r)
{
    int i,j,k;
    int n1=m-l+1;
    int n2=r-m;
    //forming alternate arrays
 	int L[n1], R[n2];
	for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=0;
    j=0;
    k=l;
    while(i<n1&&j<n2)
	{
       	if(L[i]<= R[j])
	   	{
           arr[k]=L[i];
           i++;
    	}
        else
		{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1)
	{
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2) 
	{
        arr[k]=R[j];
        j++;
        k++;
    }
}
//Driving function for merge sort through recursion
void mergeSort(int arr[], int l, int r)
{
    if (l<r)
	{
        int m=l+(r-l)/2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
    	merge(arr, l, m, r);
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
    mergeSort(a, 0,n-1);
    printf("\nSorted Array\n");
	display(a);
    return 1;
}
