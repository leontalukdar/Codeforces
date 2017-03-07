#include <iostream>

using namespace std;

int main()
{
    int row,col,mid=3;
    int Move = 0,dif1=0,dif2=0;
    int mat[5][5];
    for(int i =0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>mat[i][j];
            if(mat[i][j]==1)
            {
                row = i+1;
                col = j+1;
            }
        }
    }
    dif1 = mid-row;
    dif2 = mid - col;
    if(dif1<0)
        dif1*=-1;
    if(dif2<0)
        dif2*=-1;
    Move = dif1 + dif2;
    cout<<Move<<endl;
    return 0;
}
