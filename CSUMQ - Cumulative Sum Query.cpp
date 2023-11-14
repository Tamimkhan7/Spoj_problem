#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+7;
int a[N];
#define ll long long
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)cin>>a[i];
    ll sum =0;
    for(int i=1; i<=n; i++)
    {
        a[i] = a[i-1]+a[i];//use prefix sum
    }
    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        l++,r++;
        ll res = a[r]-a[l-1];
        cout<<res<<endl;
    }
}
