#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int checkPrime(int);

using namespace std;

int main()
{
    int n,prim;
    int flag1 = 0;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        prim = checkPrime(i);
        if(prim)
        {
            if(n%i == 0)
            {
                flag1 = 1;
                break;
            }
        }
        else
            flag1 =0;
    }
    if(flag1 == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}

int checkPrime(int prime)
{
    int res,flag = 0;
    while(prime>0)
    {
        res = prime%10;
        prime = prime/10;
        if(res==4 || res==7)
            flag = 1;
        else
        {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        return 1;
    else
        return 0;
}
