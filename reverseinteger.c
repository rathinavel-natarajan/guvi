#include <stdio.h>

int main()
{
    int a,revnum=0,rem;
    scanf("%d",&a);
    while(a!=0){
        rem=a%10;
        revnum=revnum*10+rem;
        a/=10;
    }
    printf("%d",revnum);
    return 0;
}
