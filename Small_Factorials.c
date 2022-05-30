#include<stdio.h>
int main()
{
    int n,i,a,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        for(j=a-1;j>=1;j--)
        {
            a=a*j;
        }
        printf("%d",a);
        printf("
");
    }
}