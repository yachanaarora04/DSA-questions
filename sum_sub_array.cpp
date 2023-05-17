#include<iostream>
using namespace std;
int main()
{
    int n,A[10];
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];
    for(int i=0;i<n;i++)
    {
        int sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+A[j];
            cout<<sum<<endl;
        }
    }
}