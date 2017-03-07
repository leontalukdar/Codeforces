#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>

using namespace std;

int main()
{
    int n,countneg,temp1,temp2,countpos;
    string s;
    cin>>n;
    getchar();
    countneg = temp1 = temp2 = countpos = 0;
    for(int i=0;i<n;i++)
    {
        getline(cin,s);
        if(s[0] == '-')
            countneg++;
        if(temp1<=countneg)
            temp1 = countneg;
        if(s[0] != '-')
        {
            countneg = 0;
        }
        if(s[0] == '+')
            countpos++;
        if(temp2<=countpos)
            temp2 = countpos;
        if(s[0] != '-')
        {
            countneg = 0;
        }
        s.clear();
    }
    if(temp1>temp2)
        cout<<temp1<<endl;
    else
        cout<<temp2<<endl;
    return 0;
}
