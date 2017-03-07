#include <iostream>
#include <string>
#include <stdio.h>
#include <ctype.h>

using namespace std;

int main()
{
    string s1,s2;
    unsigned int i,j;
    i=j=0;
    cin>>s1;
    cin>>s2;
    while(s1[i])
    {
        s1[i] = toupper(s1[i]);
        i++;
    }
    while(s2[j])
    {
        s2[j] = toupper(s2[j]);
        j++;
    }
    cout<<s1.compare(s2)<<endl;
    return 0;
}
