#include <stdio.h>
#include<string.h>
int main()
{
    int i;
    char c[50],temp;
    scanf("%s",&c);
    for(i=0;i<strlen(c);i+=2){
        temp=c[i];
        c[i]=c[i+1];
        c[i+1]=temp;
    }
        printf("%s",c);
    return 0;
}
