#include<stdio.h>
int main()
{
    int a[100],n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n-1;i++)
    {
        if(a[i]%2!=0 && (a[i-1]%2!=0 && a[i+1]%2!=0))
        {
            c=c+1;
        }
    }
    printf("%d",c);
}