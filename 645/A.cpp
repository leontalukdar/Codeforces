#include <iostream>
#include <sstream>
#include <math.h>
#include <algorithm>
#include <string>
#include <map>
#include <vector>
#include <stdlib.h>
#include <stdio.h>

#define ll long long int

using namespace std;

//Normal Gcd
int gcd ( int a, int b )
{
    int c;
    while ( a != 0 )
    {
        c = a;
        a = b%a;
        b = c;
    }
    return b;
}

//Recursive Gcd
int gcdr ( int a, int b )
{
    if ( a==0 ) return b;
    return gcdr ( b%a, a );
}

int main()
{
    string s1,s2;
    char ch1[3][3],ch2[3][3];
    for(int i=0; i<2; i++)
    {
        cin>>ch1[i][0]>>ch1[i][1];
    }
    for(int i=0; i<2; i++)
    {
        cin>>ch2[i][0]>>ch2[i][1];
    }
    for(int i=0,k=0; i<2; i++)
    {
        if(i==0)
        {
            for(int j=0; j<2; j++)
            {
                if(ch1[i][j]=='X')
                {
                    continue;
                }
                s1[k]=ch1[i][j];
                k++;
            }
        }
        else
        {
            for(int j=1; j>=0; j--)
            {
                if(ch1[i][j]=='X')
                    continue;
                s1[k]=ch1[i][j];
                k++;
            }
        }
    }
    for(int i=0,k=0; i<2; i++)
    {
        if(i==0)
        {
            for(int j=0; j<2; j++)
            {
                if(ch2[i][j]=='X')
                {
                    continue;
                }
                s2[k]=ch2[i][j];
                k++;
            }
        }
        else
        {
            for(int j=1; j>=0; j--)
            {
                if(ch2[i][j]=='X')
                    continue;
                s2[k]=ch2[i][j];
                k++;
            }
        }
    }
    for(int i=0; i<3; i++)
    {
        if(s1[0]==s2[i])
        {
            i++;
            if(i==3)
                i=0;
            if(s1[1]==s2[i])
            {
                i++;
                if(i==3)
                    i=0;
                if(s1[2]==s2[i])
                {
                    cout<<"YES"<<endl;
                    return 0;
                }
                else
                    break;
            }
            else
                break;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
