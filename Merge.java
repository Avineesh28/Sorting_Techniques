import java.util.*;
public class Merge
{
    int n,m;
    int a[],b[],c[];
    Merge(int n,int m)
    {
        this.n=n;
        this.m=m;
        a=new int[n];
        b=new int[m];
        c=new int[m+n];
    }

    void input()
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array 1");
        for(int i=0;i<n;i++)
            a[i]=sc.nextInt();
        System.out.println("Enter array 2");
        for(int j=0;j<m;j++)
            b[j]=sc.nextInt();
    }

    void processing()
    {
        int j=n-1;
        int k=m-1;
        int i=0;
        while(j<n && k<m && i<m+n)
        {
            if(a[j]>b[k])
            {
                c[i]=a[j];
                i++;
                j++;
            }
            else if(a[j]<b[k])
            {
                c[i]=b[k];
                i++;
                k++;
            }
            else
            {
                c[i]=a[j];
                c[i+1]=b[k];
                i+=2;
                j++;
                k++;
            }
        }
    }

    void display()
    {
        System.out.println("Merged Array");
        for(int i=0;i<m+n;i++)
            System.out.print(c[i]+" ");
    }

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter array lengths");
        Merge obj=new Merge(sc.nextInt(),sc.nextInt());
        obj.input();
        obj.processing();
        obj.display();
    }
}