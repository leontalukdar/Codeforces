#include <iostream>
#include <string>
#include <algorithm>
#include <stdio.h>
#include <cstring>

using namespace std;

int main()
{
    char ch[110];
    int ar[110] = {0};
    scanf("%s",ch);
    int len = strlen(ch);
    int i,j,k;
    for(i=0,j=0;i<len;i++)
    {
        if(ch[i]!='+')
        {
            ar[j] = ch[i] - '0';
            j++;
        }
    }
    sort(ar,ar+j);
    for(i=0,k=0;i<j;i++)
    {
        ch[k] = ar[i] + '0';
        k++;
        if(i+1<j )
        {
            ch[k] = '+';
            k++;
        }
    }
    ch[k] = '\0';
    printf("%s\n",ch);
    return 0;
}
