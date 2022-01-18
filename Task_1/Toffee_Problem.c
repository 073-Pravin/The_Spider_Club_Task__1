#include<stdio.h>
int main()
{
   long int n,m,temp,mt=0;
    scanf("%ld %ld",&n ,&m);
   long int a[n];
    for(int i=0;i<n;i++)
           scanf("%ld",&a[i]);
    for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           if(a[j]<a[i])
           {
              temp=a[j];
               a[j]=a[i];
               a[i]=temp;
           }
       }
    }
    for(int i=0;i<n;i++)
    {
        
        if(m>0)
        {
            m=m-a[i];
            if(m>=0)
                mt++;
            else
                break;
        }
    }
    printf("%ld",mt);
    return 0;
}