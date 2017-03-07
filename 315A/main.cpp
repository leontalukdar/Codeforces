#include <stdio.h>
#include <iostream>

using namespace std;

int f(int val) {
    --val && f(val);
    return printf( "%d ", val+1);
}

int main(){
    int x;
    cin>>x;
    f(x);
    return 0;
}
