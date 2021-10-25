#include<iostream>
using namespace std;
int main()
{
int a=10;
int b=20;
swap(a,b);
cout<<a<<endl;
cout<<b<<endl;
return 0;
}
void swap(int &a,int &b)
{
int temp;
temp=b;
b=a;
a=temp;
}
