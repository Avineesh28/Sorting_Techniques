import java.util.*;
public class Selection_Sort
{
    int a[];
    int n;
    Selection_Sort(int n)
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
            h=0;
            p=i;
            for(int j=i;j<n;j++)
            {
                if(a[i]<a[j])
                {
                    h=a[j];
                    p=j;
                }
            }
            int t=a[i];
            a[i]=h;
            a[p]=t;
            System.out.println(Arrays.toString(a));
        }
    }
    void display()
    {
        System.out.println(Arrays.toString(a));
    }
    public static void main(String args[])
    {
        Selection_Sort obj=new Selection_Sort(5);
        obj.input();
        obj.display();
        obj.sort();
        obj.display();
    }
}
