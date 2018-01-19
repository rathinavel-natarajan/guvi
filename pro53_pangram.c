#include <stdio.h>
#include<string.h>
static int x[26];
int main()
{
    int i,j,l,count=0;
    char a[100];
    gets(a);
    l=strlen(a);
    for(i=0;i<l;i++){
        a[i]=tolower(a[i]);
        check(a[i]);
    }
    for(i=0;i<26;i++){
        if(x[i]==0){
            count=1;
            break;
        }
    }
    if(count==1) printf("NO");
    else printf("YES");
    return 0;
}
void check(char m)
{
    switch(m)
    {
        case 'a': x[0]=1; break;
        case 'b': x[1]=2; break;
        case 'c': x[2]=3; break;
        case 'd': x[3]=4; break;
        case 'e': x[4]=5; break;
        case 'f': x[5]=6; break;
        case 'g': x[6]=7; break;
        case 'h': x[7]=8; break;
        case 'i': x[8]=9; break;
        case 'j': x[9]=10; break;
        case 'k': x[10]=11; break;
        case 'l': x[11]=12; break;
        case 'm': x[12]=13; break;
        case 'n': x[13]=14; break;
        case 'o': x[14]=15; break;
        case 'p': x[15]=16; break;
        case 'q': x[16]=17; break;
        case 'r': x[17]=18; break;
        case 's': x[18]=19; break;
        case 't': x[19]=20; break;
        case 'u': x[20]=21; break;
        case 'v': x[21]=22; break;
        case 'w': x[22]=23; break;
        case 'x': x[23]=24; break;
        case 'y': x[24]=25; break;
        case 'z': x[25]=26; break;
        default: return 0;
    }
    return 0;
}
