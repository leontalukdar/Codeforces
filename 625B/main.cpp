#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    int count1=0;
    for(int a=0; a<s1.length(); a++)
    {
        int index = -1;
        index = s1.find(s2,a);
        if(index!=-1)
        {
            count1++;
            a=index;
            a=a+s2.length()-1;
        }
        else
            break;
    }
    cout<<count1<<endl;
    return 0;
}
