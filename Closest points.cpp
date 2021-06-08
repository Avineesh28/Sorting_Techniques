#include <stdio.h>
#include <math.h>
int n;
void input(int x[50],int y[50])
{
	printf("Enter the points spereated by a space\n");
	int i;
	for(i=0;i<n;i++)
		scanf("%d %d",&x[i],&y[i]);
}
void swap(int *a, int *b)
{   
	int t = *a;
	*a = *b;
	*b = t;
}
int partition(int x[],int y[], int low, int high)
{
    int pivot = x[high];
	int i = (low - 1);
	int j;
	for (j=low;j<high;j++)
	{
	    if (x[j] <= pivot)
		{
			i++;
			swap(&x[i], &x[j]);
			swap(&y[i], &y[j]);
	    }
   }
   swap(&x[i + 1], &x[high]);
   swap(&y[i + 1], &y[high]);
   return (i + 1);
}
void quickSort(int x[],int y[], int low, int high)
{
   if (low < high)
   {
        int pi = partition(x,y, low, high);     
		quickSort(x,y, low, pi - 1); 
		quickSort(x,y, pi + 1, high);
   }
} 
void display(int x[],int y[])
{
	int i;
	printf("The points->\n");
	for(i=0;i<n;i++)
		printf("( %d , %d )\n",x[i],y[i]);
}
int main()
{
	printf("Enter the number of points\n");
	scanf("%d",&n);
	int x[50];
	int y[50];
	input(x,y);
	display(x,y);
	quickSort(x,y,0,n-1); 
	quickSort(y,x,0,n-1);
	int d=sqrt(pow(x[0]-x[1],2)+pow(y[0]-y[1],2));
	printf("\nThe closest pair of points are ( %d , %d ) and ( %d , %d ) and are %d units apart",x[0],y[0],x[1],y[1],d);
	return 1;
}
			/*Sample Input
			1 6
			7 3
			2 9
			10 11
			9 3
			*/
