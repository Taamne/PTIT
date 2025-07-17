#include<bits/stdc++.h>
using namespace std;
int t, n, s, m, k, q,res;


main()
{
    cin>>t;
    while(t--)
    {
        cin>>n>>s>>m;
        res = 0;
        if(n<m) cout<<-1<<endl;
        if(n==m && s>=7) cout<<-1<<endl;
        if ( n==m && s<7) cout<<s<<endl;
        if(n>m)
        {
            if((n*6<m*7)) cout<<-1<<endl;
            else{
                k=0;
                do
                {
                    k++;
                    res+=n;
                    q=res/m;
                    res-=q*m;
                    s-=q;
                }
                while(s>0);

                cout<<k<<endl;
            }
        }
    }
    return 0;
}

