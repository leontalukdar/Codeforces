#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <algorithm>
#include <vector>

using namespace std;

int is_2char(string s)
{
    int dup=0;
    sort(s.begin(),s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s[i+1])
            dup++;
        if(dup>2)
            return 0;
    }
    return 1;
}

int main()
{

    return 0;
}
