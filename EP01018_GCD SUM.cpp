#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
	while(a!=b)
	{
		if(a>b)
		a=a-b;
		else
		b=b-a;
	}
	return a;
}
int tongchuso (int n)
{
	int m,sum=0;
	while(n>0)
	{
		m=n%10;
		n=n/10;
		sum+=m;
	}
	return sum;
}
int main()
{
	int t;
	cin >>t;
	while(t--)
	{
    long long int n;
    cin>>n;
    int g=1,m,i=0;
    while(g==1){
      m=n+i;
      g=gcd(m,tongchuso(m));
      i++;
    }
    cout<<m<<endl;
  }
  return 0;
}

