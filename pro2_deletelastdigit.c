#include <stdio.h>

int main()
{
    int i,j,x=0,n,digi,a[10],temp,fin=0;
    scanf("%d %d",&n,&digi);
    while(n!=0){
        a[x]=n%10;
        n/=10;
        x++;
    } 
    for(i=0;i<x;i++){
        for(j=i+1;j<x;j++){
            if(a[i]>a[j]){
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    x=x-digi;
    for(i=0;i<x;i++){
        fin=10*fin+a[i];
    }
    printf("%d",fin);
    return 0;
}
