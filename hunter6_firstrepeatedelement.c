#include <stdio.h>
int main()
{
    int i,j,k,a[100],count=0,n;
    scanf("%d ",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++){
        for(k=j+1;k<n;k++){
            if(a[j]==a[k]) {
                printf("%d ",a[k]); count=1;
                break;
            } 
            else count=0;
        }if(count==1) break;
    }
    return 0;
}
