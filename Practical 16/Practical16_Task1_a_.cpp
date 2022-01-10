#include<iostream>
using namespace std;

template <typename A, typename B, typename R>
R add(A num1, B num2)
{
    R ans = num1 + num2;
    return ans;
}

int main()
{
   cout<<"KHUSHI SHARMA"<<endl;
    cout << add<int, int, int>(2, 3) << endl;
    return 0;
}
