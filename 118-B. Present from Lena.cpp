#include<bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define pb push_back
using namespace std;
const int mx=2e6+123;
int main()
//1 2 3 4 5
//1 2 3
{
    ll t,n,len,x,z,a;
    cin>>t;
    n=t+(t-1)+2;
    len=1;
    a=0;
    vector<string>v;
    string st,st1;
    for(int i=1; i<=t+1; i++)
    {
        z=((n-len)/2);
        x=a;
        //cout<<"z:"<<z<<" x: ";
        for(int i=z+x+1; i>=1; i--)
        {
            //  cout<<x<<" st:";
            if(x>=0)
            {
                st+=to_string(x);
                st1+=to_string(x);
                st+=" ";
                st1+=" ";
                x--;
            }
            else  st+="  ";
            //cout<<st<<endl;
        }
        st.pop_back();
        reverse(st.begin(),st.end());
        st1.pop_back();
        reverse(st1.begin(),st1.end());
        st1.pop_back();
        reverse(st1.begin(),st1.end());
        st+=st1;
        //cout<<st;
        cout<<st<<endl;
        v.pb(st);
        st.clear();
        st1.clear();
        len+=2;
        a++;
    }
    for(int i=v.size()-2; i>=0; i--) cout<<v[i]<<endl;
    return 0;
}
