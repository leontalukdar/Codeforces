#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ll long long int

using namespace std;

int main()
{
    char ch[300001];
    ll res=0,x;
    gets(ch);
    for(int i=0;i<strlen(ch);i++)
    {
        x=0;
        for(int j=i;j<strlen(ch);j++)
        {
            for(int k=i;k<=j;k++)
            {
                x=x*10+ch[k]-48;
            }
            if(x%4==0)
                res++;
        }
    }
    printf("%ld\n",res);
    return 0;
}
