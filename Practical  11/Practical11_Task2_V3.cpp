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
class B:protected A{
public:
void display()
 {
     x=10; //Inheritance because x,y are data members of class A
     y=20;
   //z=30; //will throw error because z is private member of class A
   cout<<"X="<<x<<endl;
   cout<<"Y="<<y<<endl;
   //cout<<"Z="<<z<<endl;
 }
};
/*
class C: public B
{  public:
     void display()
       {
          y=20; //Inheritance because x,y are data members of class A
          cout<<"Value of y="<<y<<endl;
       }
};
*/
int main()
{
 B obj;
 //obj.x=30; //because Class A is inherited Privately
 //obj.y=40; //will throw error b/c y is protected can not access through
             //object of Class B but can be accessed through
             //object of Child class of Class B
 
 obj.display(); 
 //C obj2;
 //obj2.display(); //will not be accessed through object of Class C b/c
                   //Class A is inherited as private in class B

 return 0;
}
