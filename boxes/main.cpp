#include <iostream>
using namespace std;

int main()
{
    int n,m,stu,box[10000],time=0;
    cin>>n>>m;
    stu = m;
    for(int i=1;i<=n;i++)
        cin>>box[i];
    for(int i=1;i<=n;i++)
    {
        time++;
        int m = m-box[i];
        if(i!=n)
            time++;
        if(m==0)
        {
            time++;
            m=stu;
        }
        else if(m<0)
        {
            time = time+2;
            m=stu;
        }

    }
    cout<<time;
    return 0;
}
