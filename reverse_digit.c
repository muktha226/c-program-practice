#include<stdio.h>
int main()
{
    int n,revdig=0,r;
    printf("Enter a number");
    scanf("%d",&n);
    while(n>0)
   { r=n%10;
    revdig=(revdig*10)+r;
    n=n/10;
   }
    printf("the reversed digit is %d",revdig);
    return 0;
}