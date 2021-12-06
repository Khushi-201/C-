#include<iostream>
using namespace std;
class A{
int k;
public:
void display()
{
cout<<"This is display method from Base class A"<<endl;
}
};
 
class B: virtual public A{
public:
void display1()
{
cout<<"This is display1 method from class B"<<endl;
}
cout<<"K="<<k<<endl;
};

class C: public A{
public:
void display2()
{
cout<<"This is display2 method from class C"<<endl;
}
};

class D:public B,public C{
};
int main()
{
D d;
//d.display1();
//d.display2();
d.display();
d.k=10;
return 0;
}
