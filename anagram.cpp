#include<bits/stdc++.h>

using namespace std;
bool fun(string a,string b)
{
    if(a.length()!=b.length())
    {
        return false;
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    return (a==b);
}
int main()
{
    string a,b;
    cin>>a>>b;
    int c=fun(a,b);
    if(c==1)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"NO";
    }
}
