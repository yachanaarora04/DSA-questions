#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,A[10];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>A[i];
    int pd,curr,ans;
    pd=A[1]-A[0];
    ans=2;
    curr=2;
    for(int i=2;i<n;i++)
    {
        if(pd==A[i]-A[i-1])
        {
            curr+=1;
            ans=max(ans,curr);
        }
        else
        {
            curr=2;
            pd=A[i]-A[i-1];
        }
    }
    cout<<ans;
}