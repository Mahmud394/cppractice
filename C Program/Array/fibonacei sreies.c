#include<stdio.h>
int main()
{
    int a[110],n,i;
    printf("How many fibonacei number :");
    scanf("%d",&n);
    a[0] =0;
    a[1]= 1;
    for(i=2;i<n;i++)
    {
        a[i]=a[i-1]+a[i-2];

    }
    printf("\n");
    for(i=1;i<n;i++)
    {
        printf(" %d",a[i]);
    }
    getch();
}
