#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"ENTER THE NUMBER YOU WANT TO CHECK : ";
    cin>>n;
    int count;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"THIS IS PRIME NUMBER "<<endl;
    }
    else
    {
        cout<<"THIS IS NOT A PRIME NUMBER "<<endl;
    }
}