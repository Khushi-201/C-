#include<iostream>
#include<algorithm>
#include<vector>

void show(int arr[],int) ;
void BinarySearch() ;
using namespace std;
int main()
{
    cout<<"\t\t Khushi Sharma 200111288 A"<<endl ;
    int arr[5] = {1,3,2,5,4} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v1(arr, arr+n);
    //printing vector
    cout<<"Vector Using Array" <<endl ;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i <<" " ;
    }
    //Sort a vector
    cout<<"\nSorting a Vector Using STL "<<endl ;
    sort(v1.begin(),v1.end()) ;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i <<" " ;
    }
    //Reversing a vector 
    cout<<"\nReversing a Vector Using STL "<<endl ;
    reverse(v1.begin(),v1.end()) ;
    for(auto i=v1.begin();i!=v1.end();i++)
    {
        cout<<*i <<" " ;
    }
    // MAx and Min Element in Vector 
    cout<<"\nMax Elemnet in Vector is : "<<*max_element(v1.begin(),v1.end()) <<endl ;
    cout<<"Min Elemnet in Vector is : "<<*min_element(v1.begin(),v1.end()) <<endl ;
    //Occurance of x in Vector
    cout<<"\nOccurrence of 3 in Vector : "<<count(v1.begin(),v1.end(),3) <<endl ;
    // Sort a Array 
    int i , j ;
    cout<<"\nSorting of Array "<<endl ;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5-1-i;j++) // Bibble Sort
        {
            if(arr[j]>arr[j+1])
            {
                int temp = arr[j] ;
                arr[j]   = arr[j+1] ;
                arr[j+1] = temp ;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i] <<" " ;
    }
    // Binary Search in Array 
    cout<<"\n\nBinary Search "<<endl ;
    BinarySearch() ;
    return 0 ;
}
