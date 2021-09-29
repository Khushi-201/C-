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
int main()
{
first::add(1,2);
second::add(1.1,1.2);
second::add(1.2,2);
second::add(1,2.1);
second::add(0,0);
return 0;
}
