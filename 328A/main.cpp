#include <iostream>

using namespace std;

int main()
{
    char ch[9][9];
    int black=10,white=10,temp1=10,temp2=10,col1=10,col2=10;
    for(int r=1; r<=8; r++)
    {
        for(int c=1; c<=8; c++)
            cin>>ch[r][c];
    }
    for(int r=1; r<=8; r++)
    {
        for(int c=1; c<=8; c++)
        {
            if(ch[c][r]=='B'&&c!=8)
            {
                col1 = r;
                temp1 = 8-c;
            }
        }
        for(int c=1; c<=8; c++)
        {
            if(ch[c][r]=='W'&&c!=1)
            {
                col2=r;
                temp2 = c;
                break;
            }
        }

        if(col1!=col2)
        {
            if(temp1<=black)
                black = temp1;
            if(temp2<=white)
                white=temp2;
        }

    }
    if(white<=black)
        cout<<"A"<<endl;
    else
        cout<<"B"<<endl;
    return 0;
}
