#include <stdio.h>
#include<string.h>
int main()
{
    int i,l;
    char c[100],d[100];
    scanf("%s",c);
    l=strlen(c);
    for(i=0;i<l;i++){
        d[i]=c[l-i-1];
    }
    puts(d);
    return 0;
}
