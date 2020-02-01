
// this is correct
#include<iostream>

using namespace std;
void prime_sieve(int *p,int n)
{
    p[0]=p[1]=0;
    p[2]=1;
    for(int i=3;i<=n;i+=2)
    {
        p[i]=1;
    }
    for(int i=3;i<=n;i+=2){
    if(p[i]){
        for(int j=i*i;j<=n;j+=2*i)
        {
            p[j]=0;
        }
     }
    }
    return;
}
int main()
{
    int n=10000;
    int p[n]={0};
    prime_sieve(p,58);
    for(int i=0;i<=100;i++)
    {
        if (p[i])
        {
            cout<<i<<"  ";
        }
    }
    return 0;
}
