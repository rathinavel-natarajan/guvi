#include <stdio.h>

int main()
{
    int i,n,p,q,r,max=0;
    scanf("%d%d%d%d",&n,&p,&q,&r);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>max) max=a[i];
    }
    printf("%d",p*max+q*max+r*max);
    return 0;
}
