#include<iostream>
using namespace std;

namespace first{
int add(int a,int b)
{
cout<<"Sum :"<<a+b<<endl;
}}
namespace second{
float add(float a,float b)
{
cout<<"Sum :"<<a+b<<endl;
}}
using namespace first;
using namespace second;
int main()
{
cout<<add(1,2);
cout<<add(1.1,1.2);
cout<<add(1.2,2);
cout<<add(1,2.1);
cout<<add(0,0);
return 0;
}
