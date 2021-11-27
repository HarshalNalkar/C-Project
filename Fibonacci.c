#include<stdio.h>
int main()

{
    int k=0, n=1, sum=0;
    printf("\n Program the fibonacci series");
    printf("\n\n Enter the value");
    
    printf("\n\n %d",k);
    printf(" %d",n);
    while(k<34)
    {
        sum = k+n;
        printf("\t %d",sum);
        k=n;
        n=sum;
    }
    return 0;
}
