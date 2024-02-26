#include<iostream>
using namespace std;


template <typename T>
T max1(T a, T b) {
    return (a > b) ? a : b;
}

int main()
{
    //int a = 1, b = 2, c = 3;
    int ans = max1(1, 2);
    cout << ans;
    cout << "hh"<<endl;
    return 0;
}