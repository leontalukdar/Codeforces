#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    char ch[1000],res[1000];
    int i,j;
    scanf("%s",ch);
    int len = strlen(ch);
    for(i=0,j=0;i<len;i++)
    {
        if(ch[i] !='A' && ch[i] != 'a' && ch[i] !='E' && ch[i] != 'e' && ch[i] !='I' && ch[i] != 'i' && ch[i] !='O' && ch[i] != 'o' && ch[i] !='U' && ch[i] != 'u' && ch[i] != 'Y' && ch[i] !='y')
        {
            res[j]='.';
            j++;
            if(ch[i]>=65 && ch[i]<=91)
                ch[i] = ch[i] + 32;
            res[j]=ch[i];
            j++;
        }
    }
    res[j] = '\0';
    printf("%s\n",res);
    return 0;
}
