#include <bits/stdc++.h>
using namespace std;
long long n,res=0,t,k;
bool ok;
int x[100],xo[100];
string a[100];
int c[100];
string s[1000000];
void binaryGen( int x[], int n )
{
    ok=1;
    int i = n;
    while (i > 0 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i == 0) ok=0;
    else x[i] = 1;
}
bool check()
{
    int cnt=0;
    for(int i=1; i<=n; i++)
        if(x[i]) cnt++;
    if(cnt==k) return 1;
    return 0;
}
void Xuat(int res)
{
    for(int i=1; i<=n; i++)
        if(x[i]) s[res]=s[res]+a[i];
    //cout<<endl;
}
main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        x[i]=0;
    }
    ok=1;
    while(ok)
    {
        if(check())
        {
            res++;
            Xuat(res);
        }
        binaryGen(x,n);
    }
    s[res+1]="-1";
    sort(s+1,s+res+1);
    for(int i=1; i<=res; i++)
        if(s[i]!=s[i-1])cout<<s[i]<<endl;
}
