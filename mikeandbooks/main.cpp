#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    unsigned long i,n,number;
    string res,temp;

    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>number;
        ostringstream   convert;
        convert << number;
        temp = convert.str();
    }
    cout<<temp<<endl;
    return 0;
}
