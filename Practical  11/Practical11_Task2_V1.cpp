#include<iostream>
using namespace std;
class A
{
  public:
    int x;
  protected: 
    int y;
  private:
    int z;
};
class B:public A{
public:
void display()
 {
     x=10; //Inheritance because x,y are data members of class A
   //y=20; //Inheritance becaue x,y aredata members of class A
   //z=30; //will throw error because z is private member of class A
   cout<<"X="<<x<<endl;
   //cout<<"Y="<<y<<endl;
   //cout<<"Z="<<z<<endl;
 }
};
int main()
{
 B obj;
 //obj.x=10;
 //obj.y=20; //will throw error b/c y is protected can not access through
             //object of Class B but can be accessed through
             //object of Child class of Class B
 
 obj.display(); 

 return 0;
}
