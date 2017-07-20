#include <stdio.h>
#include<string.h>
int main()
{
    char c[100];
    gets(c);
    int i,length=strlen(c);
    for(i=0;i<length;i++){
        printf("%d ",c[i]);
    }
    return 0;
}
