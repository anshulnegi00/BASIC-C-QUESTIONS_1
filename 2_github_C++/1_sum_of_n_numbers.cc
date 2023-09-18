#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"ENTER NUMBER TILL YOU WANT TO PRINT SUM : ";
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    cout<<"SUM OF "<<n<<"NUMBER IS "<<sum;
}