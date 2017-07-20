#include <stdio.h>
#include<string.h>
int main()
{
    char c[20],d[20],temp;
    gets(c);
    int l=strlen(c);
    for(int i=0;i<l/2;i++){
        temp=c[i];
        c[i]=c[l-1-i];
        c[l-1-i]=temp;
    }
    puts(c);
    return 0;
}
