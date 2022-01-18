#include<stdio.h>
int main()
{
    int p,q,r,s,ans=0;
    scanf("%d %d %d %d",&p,&q,&r,&s);
    if(p<=r)
    {  
       if(r<q)
          if(q<s) 
            ans=q-r;
          else 
            ans=s-r;
    }
    else
    {
        if(p<s)
            if(q>s)
               ans=s-p;
            else
                ans=q-p;
    }
    printf("%d",ans);
}