#include<iostream>
using namespace std;
class A{
public:
int x;
int y;
};
class B:public A{
public:
void display()
 {
   x=10;
   y=20;
   cout<<"X="<<x<<endl<<"Y="<<y<<endl;
 }
};
int main()
{
 B obj;
 
 obj.display();
}
