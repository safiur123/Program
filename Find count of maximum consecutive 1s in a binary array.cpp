//created by Safiur Rahaman
// date 30.7.20
#include<bits/stdc++.h>

using namespace std;
void solved(int a[],int b)
{
    int res=0;
    int count=1;
    for(int i=1; i<b; i++)
    {
        if(a[i]!=a[i-1])
        {
            res=max(res,count);
            count=1;
        }
        else
        {
            count++;
        }
    }
    
    cout<<res;
}
int main()
{
    int a[]={1,1,0,1,1,1,0};
    int b=sizeof(a)/sizeof(a[0]);
    solved(a,b);
}
