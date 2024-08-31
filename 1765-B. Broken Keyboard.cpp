#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
const int mx=2e6+123;
int main()
{
    int t,n,c=0;
    string st;
    vector<int>v;
    for(int i=0;i<100;i++){
        c++;
        if(c==2)v.pb(i);
        if(c==3)c=0;
    }
    //for(auto i:v)cout<<i<<" ";
    cin>>t;
    while(t--)
    {
        cin>>n>>st;
        int i=0,k,f=1;
        for(k=0;k<n;k++)
        {
            if(k==v[i])
            {
                if(st[k]!=st[k+1])
                {f=0;break;}
                else i++;
            }
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
