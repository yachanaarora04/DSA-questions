#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,A[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int count=0;
    int maxi=INT16_MIN;
    if(n==1)
    cout<<"1";
    for(int i=0;i<n;i++)
    { 
        if(A[i]>A[i+1] && A[i]>maxi)
        {
            count+=1;
        }
        maxi=max(A[i],maxi);
    }
    cout<<count;
}