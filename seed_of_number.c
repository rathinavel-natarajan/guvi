#include <stdio.h>
int fnxn(int x);
int main()
{
    int n,i,j,mul=1;
    scanf("%d",&n);
    for(i=1;i<n/2;i++){
        mul=i*fnxn(i);
        if(mul==n) printf("%d ",i);
    }
    return 0;
}
int fnxn(int x)
{
    int i,pro=1,rem;
    while(x!=0){
        rem=x%10;
        pro=pro*rem;
        x/=10;
    }
    return pro;
}
