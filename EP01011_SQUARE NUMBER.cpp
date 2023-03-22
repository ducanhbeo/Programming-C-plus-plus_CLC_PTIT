#include <iostream>
#include <math.h>
using namespace std;
 int scp (int n)
{
	int i=0;
	while(i*i<=n)
	{
		if (i*i==n)
		return 1;
		++i;
	}
	return 0;
}
int main()
{
	int a,b,s=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		if(scp(i))
		s+=i;
	}
	cout<<s;
}

