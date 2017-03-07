#include <iostream>

using namespace std;

int main()
{
    int n,Count;
    int input[110],output[110];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    for(int i=0;i<n;i++)
    {
        Count = 1;
        for(int j=0;j<n;j++)
        {
            if(i+1 != input[j])
                Count++;
            else
                break;
        }
        output[i] = Count;
    }
    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
    return 0;
}
