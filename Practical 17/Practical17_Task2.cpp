#include<iostream>
#include<vector>

using namespace std;
int main()
{
    cout<<"\t\t Khushi Sharma 200111288 A"<<endl ;
    vector <int> v1 ;
    int n , num , i ;
    cout<<"Enter No. of Elements : ";
    cin>>n ;
    cout<<"Enter Elements in Vector "<<endl;
    for(i=0;i<n;i++)
    {
        cin>>num ;
        v1.push_back(num) ;
    }
    cout<<"The Vector is "<<endl ;
    for(i=0;i<n;i++)
    {
        cout<<v1[i] <<" ";
    }
    cout<<"\nVector using Iterator "<<endl ;
    for(auto j= v1.begin();j!=v1.end();++j)
    {
        cout<<*j<<" " ;
    }
    
    cout<<"\nReverse Printing using rbegin() and rend() "<<endl ;
    for(auto ir= v1.rbegin();ir!=v1.rend();++ir)
    {
        cout<<*ir<<" " ;
    }
    //size
    cout<<"\nSize   of   Vector is : "<<v1.size() <<endl ;
    cout<<"Cpacity  of Vector is : "<<v1.capacity() <<endl ;
    cout<<"Max Size of Vector is : "<<v1.max_size() <<endl ; 
    // it gives maximum capacity based on memory of computer
    
    //Resize
    cout<<"Resizing  of Vector "<<endl ;
    v1.resize(4) ;
    cout<<"Size   of   Vector is : "<<v1.size() <<endl ;
    
    //Empty vector or not
    if(v1.empty()==1)
        cout<<"Vector is Empty "<<endl ;
    else
        cout<<"Vector is NOT Empty "<<endl ;
    return 0 ;
}
