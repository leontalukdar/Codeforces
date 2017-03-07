#include <iostream>

using namespace std;

int main()
{
    int segment[] = {6,2,5,5,4,5,6,3,7,6};
    int64_t countSeg=0;
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        int temp=i;
        while(temp!=0)
        {
            int index=temp%10;
            temp /=10;
            countSeg += segment[index];
        }
    }
    cout<<countSeg<<endl;
    return 0;
}
