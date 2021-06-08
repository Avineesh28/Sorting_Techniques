//To calculate the pair of points which are closest to each other from a pair of points
#include <stdio.h>
#include <math.h>
//global variable needed
int n;
int p1x,p2x,p1y,p2y;
//Function to input all the points
void input(int x[50],int y[50])
{
	printf("Enter the points seperated by a space\n");
	int i;
	int a[2][50];
	for(i=0;i<n;i++)
		scanf("%d %d",&a[0][i],&a[1][i]);
	for(i=0;i<n;i++)
	{
		x[i]=a[0][i];
		y[i]=a[1][i];
	}
}
//Function to swap two numbers 
void swap(int *a, int *b)
{   
	int t = *a;
	*a = *b;
	*b = t;
}
//Application of Quick Sort recursive technique 
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
//driver function of quick sort
void quickSort(int x[],int y[], int low, int high)
{
   if (low < high)
   {
        int pi = partition(x,y, low, high);     
		quickSort(x,y, low, pi - 1); 
		quickSort(x,y, pi + 1, high);
   }
} 
//Function to display the points
void display(int x[],int y[])
{
	int i;
	printf("The points->\n\n");
	for(i=0;i<n;i++)
		printf("( %d , %d )\n",x[i],y[i]);
}
double closest(int x[],int y[])
{
	int i;
	double d=999.00;
	for(i=0;i<n-1;i++)
	{
		double t=sqrt(pow(x[i]-x[i+1],2)+pow(y[i]-y[i+1],2));
		if(d>t)
		{
			d=t;
			p1x=x[i];
			p2x=x[i+1];
			p1y=y[i];
			p2y=y[i+1];
		}
	}
	return d;
}
//driver main() functions
int main()
{
	printf("Enter the number of points\n");
	scanf("%d",&n);
	//arrays to store all the points
	int x[50];
	int y[50];
	input(x,y);
	display(x,y);
	quickSort(x,y,0,n-1); 
	quickSort(y,x,0,n-1);
	display(x,y);
	double d=closest(x,y);
	//Calculating the distance between the two closest points
	printf("\nThe closest pair of points are ( %d , %d ) and ( %d , %d ) and are %lf units apart",p1x,p1y,p2x,p2y,d);
	return 1;
}
		
