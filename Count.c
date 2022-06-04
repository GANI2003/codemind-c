#include<stdio.h>
int main()
{
    int n,i,a,c=0,arr[100],co=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            c=c+1;
        }
        else
        {
            co+=1;
        }
    }
    printf("%d %d",c,co);
  
}