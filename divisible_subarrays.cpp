#include<iostream>
#include<cstring>
using namespace std;
#define ll long long
ll a[1000005],freq[1000005];
int main()
{
    int t;
    cin>>t;
while(t--)
{
    int n;
    cin>>n;
    ll sum=0;
    memset(freq,0,sizeof(freq));
    freq[0]=1;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum=sum+a[i];
        sum=sum%n;
        sum=(sum+n)%n;
        freq[sum]++;
    }
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        ll no=freq[i];
        ans=ans+((no)*(no-1))/2;
    }
    cout<<ans<<endl;
}
return 0;

}
