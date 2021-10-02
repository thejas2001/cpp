#include<iostream>
using namespace std;
#define pi 3.14
int isprime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;  
}
void primefac(int n)
{
    for(int i=2;i<n;i++)
    {
        if (isprime(i))
        {
            int j=i;
            while(n%j==0)
            {
                cout<<i;
                j*=j;
            }
        }
    }
}
int main()
{
int a;
cin>>a;
primefac(a);
    return 0;
}
