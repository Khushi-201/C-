#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    fstream myfile;
    myfile.open("Sample.txt",ios::app);
    if(!myfile)
    {
        cout<<"file not created"<<endl;
    }
    else 
    {
        myfile<<"file is diplaying"<<endl;
        cout<<"Data Appended Succesfully"<<endl;
    }
    myfile.close();
    return 0;
}
