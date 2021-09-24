#include<iostream>
#include<math.h>
using namespace std;
class construct{

public:
	int  checkPrime(int n){
	if(n==1){
	return 0;
	}
	else{
	for(int i=2;i<sqrt(n);i++){
		if((n%i)==0){
		return 0;
		break;
		
		}


}
}
	return 1;
	}


};
int main(){

int n;
cout<<"Enter the number to be checked for prime number\n";
cin>>n;
construct ob;
if(ob.checkPrime(n))
{
cout<<"\n"<<n<<" is prime";
}
else 
cout<<"\n"<<n<<" number is not prime";



}
