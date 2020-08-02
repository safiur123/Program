#include<bits/stdc++.h>

using namespace std;
void bianryconversion(int n)
{
    if(n/2 !=0)
    {
        bianryconversion(n/2);
    }
    cout<<n%2;
}
int main()
{
    int n;
    cin>>n;
    bianryconversion(n);
}
