#include <stdio.h>

int main()
{
    int n,i,x=1;
    scanf("%d",&n);
    for(i=n;i>0;i--){
        x=x*i;
    }
    printf("%d",x);
    return 0;
}
