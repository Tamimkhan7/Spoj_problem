#include <bits/stdc++.h>
using namespace std;
string arr[50000];
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        sort(arr, arr+n);
        for( int i=0; i<n; i++)
        {
            cout<<arr[i]<<endl;
        }
    }
}
