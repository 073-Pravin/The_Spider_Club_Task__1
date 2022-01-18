#include<stdio.h>
int main()
{
    int q;
    long int n,rows,j;
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%ld",&n);
        j=1;
        rows=0;
        while(n>=j)
        {
            n=n-j;
            j++;
            rows++;
        }
        printf("%ld\n",rows);
    }
}