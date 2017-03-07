#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
    long int l;
    string s;
    cin>>l;
    cin>>s;
    int64_t i=count(s.begin(),s.end(),'1');
    int64_t j=count(s.begin(),s.end(),'0');

    if(i<j) {
        l=l-(2*i);
    }

    else {
        l=l-(2*j);
    }

    cout<<l<<endl;
    return 0;
}
