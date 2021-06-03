import java.util.*;
public class Bubble_Sort
{
    int a[];
    int n;
    Bubble_Sort(int n)
    {
        this.n=n;
        a=new int[n];
    }
    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array");
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();
    }
    void sort()
    {
        for(int i=0;i<n-1;i++)
        {
            for(int j=0;j<n-1-i;j++)
            {
                if(a[j]>a[j+1])
                {
                    int t=a[j];
                    a[j]=a[j+1];
                    a[j+1]=t;
                }
            }
        }
    }
    void display()
    {
        System.out.println(Arrays.toString(a));
    }
    public static void main(String args[])
    {
        Bubble_Sort obj=new Bubble_Sort(5);
        obj.input();
        obj.display();
        obj.sort();
        obj.display();
    }
}
