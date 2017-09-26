#include <stdio.h>

int main()
{
    int i,j,a[50],temp,k;
    scanf("%d",&k);
    for(i=0;i<50;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<50;i++){
        for(j=i+1;j<50;j++){
            if(a[i]<a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    printf("%d %d",a[3],a[k-1]);
    return 0;
}
