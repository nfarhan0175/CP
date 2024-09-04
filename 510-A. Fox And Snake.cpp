#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
const int mx=2e6+123;
int main()
{
    vector<int>v1,v2;
    for(int i=1;i<=50;i+=4)v1.pb(i);
    int a,b,t1=0,i;
    cin>>a>>b;
    for(i=0;i<a;i++)
    {
        if(i%2==0)cout<<string(b,'#')<<endl;
        else if(v1[t1]==i)cout<<string(b-1,'.')<<string(1,'#')<<endl,t1++;
        else cout<<string(1,'#')<<string(b-1,'.')<<endl;
    }
    return 0;
}
