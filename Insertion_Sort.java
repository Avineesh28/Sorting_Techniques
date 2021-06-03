import java.util.*;
public class Insertion_Sort
{
    int a[];
    int n;
    Insertion_Sort(int n)
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
        int h;
        int p;
        for(int i=0;i<n-1;i++)
        {
            h=a[i];
            p=i;
            for(int j=i;j<n-1;j++)
            {
                if(a[i]<a[j])
                {
                    h=a[j];
                    p=j;
                }
            }
            for(int k=i;k<p;k++)
                a[k]=a[k+1];
            a[p]=h;
        }
    }
    void display()
    {
        System.out.println(Arrays.toString(a));
    }
    public static void main(String args[])
    {
       Insertion_Sort obj=new Insertion_Sort(5);
        obj.input();
        obj.display();
        obj.sort();
        obj.display();
    }
}
