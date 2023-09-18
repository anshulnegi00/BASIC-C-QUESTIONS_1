#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER NUMBER TILL YOU WANT TO PRINT FABONACCI SERIES : ";
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" "; 
    for(int i=1;i<=n-2;i++)
    {
        int x=a+b;
        cout<<x<<" ";
        a=b;
        b=x;
    }
}