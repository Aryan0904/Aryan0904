#include<stdio.h>
main()
{
    int n,fact=1,i;
    scanf("%d",&n);
    if(n==0||n==1)
    {
        printf("factorial of the number is   :%d",n);
        
    }
    for(int i=2;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("factorial of %d is %d",n,fact);
    
}
