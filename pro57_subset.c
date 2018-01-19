#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,l1,l2;
    char a[1000],b[1000];
    gets(a);
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    for(i=0;i<l1;i++){
        for(j=0;j<l2-1;j++){
            if(a[i]==b[j]&&a[i+1]==b[j+1]){
                printf("Yes");
                return 0;
            }
        }
    }
    printf("no");
    return 0;
}
