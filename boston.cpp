// partiall correct
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
    ll ans=0;
    cin>>n;
    ll value=n;
    ll p[n]={0};
    prime_sieve(p,n);
    for(ll i=0;i<=n;i++)
    {
        if(p[i]==1)
        {
           while(n%i==0)
           {
               //cout<<i<<" ";
               n=n/i;
              ll temp=i;
               while(temp!=0)
               {
                   ll x=0;
                   x=temp%10;
                   ans=ans+x;
                   temp=temp/10;
               }
           }
        }
        if(n==0)
        break;
    }
    ll sum=0;
    while(value!=0)
    {
        ll y=0;
        y=value%10;
        sum=sum+y;
        value=value/10;
    }
    if(ans==sum)
    {
        cout<<"1";
    }
    else
    {
        cout<<"0";
    }

    
   
    
}




