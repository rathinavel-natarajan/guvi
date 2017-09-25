#include <stdio.h>

int main()
{
    int i,a[100];
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
        if(i==a[i]) printf("%d ",i);
    }
    return 0;
}
