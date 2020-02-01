// program is correct but no running in thi try codechef ide
#include<iostream>
using namespace std;
#define ll long long
void prime_sieve(ll *p,ll n){
for(ll i=3;i<=n;i+=2)
{
    p[i]=1;
}
for(int i=3;i<=n;i+=2)
{
    if(p[i]==1)
    {
        for(ll j=i*i;j<=n;j+=2*i)
        {
            p[j]=0;
        }
    }
}
p[2]=1;
p[1]=p[0]=0;
return;
}
int main()
{
    ll n;
    cin>>n;
    ll p[n]={0};
    prime_sieve(p,n);
    for(ll i=0;i<=n;i++)
    {
        if(p[i]==1)
        {
            cout<<i<<"  ";
        }
    }
}




