#include <iostream>

using namespace std;

int main()
{
    int ar[3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
            cin>>ar[i][j];
    }
    ar[1][1]=(ar[1][0]+ar[1][2])/2;
    int temp=ar[1][1]+ar[1][0]+ar[1][2];
    ar[0][0]=temp-ar[0][1]-ar[0][2];
    ar[2][2]=temp-ar[2][0]-ar[2][1];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           cout<<ar[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
