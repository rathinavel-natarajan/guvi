#include <stdio.h>

int main()
{
    int i,j,k,a[100],count=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<i;j++){
        for(k=0;k<i;k++){
            if(a[j]==a[k]) count++;
        }if(count==1){
            printf("%d",a[j]);
            break;
        }
        else count=0;
    }
    return 0;
}
