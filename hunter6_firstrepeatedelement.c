#include <stdio.h>
int main()
{
    int i,j,k,a[100],count=0;
    for(i=0;i<100;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<i;j++){
        for(k=j+1;k<i;k++){
            if(a[j]==a[k]) {
                printf("%d ",a[k]); count=1;
                break;
            } 
            else count=0;
        }if(count==1) break;
    }
    return 0;
}
