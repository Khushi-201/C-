#include<bits/stdc++.h>
using namespace std;
/* local variable is same as a member's name */
class Test
{
private:
	string name;
	char sec;
	int rollno;
	public:
	void setX (string name,char sec,int rollno )
	{
		this->name = name;
		this->sec = sec;
		this->rollno = rollno;
	}
	void print() 
	{
	 cout << "Name,Section,Roll Number: " << name<<" "<<sec<<" "<<rollno<<" " << endl; 
	 }
};
int main()
{
Test obj;
int x = 20;
string n="Keshav Naithani";
char c='B';
int roll=33;
obj.setX(n,c,roll);
obj.print();
return 0;
}
