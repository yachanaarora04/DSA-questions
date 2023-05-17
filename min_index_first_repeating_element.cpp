#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,A[10],ind[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    for(int i=0;i<n;i++)
    {
        ind[A[i]]=-1;
    }
    int min_index=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(ind[A[i]]<0)
        ind[A[i]]=i;
        else
        {
            if(ind[A[i]]<min_index)
            min_index=ind[A[i]];
        }
    }
    cout<<min_index;
}