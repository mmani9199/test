#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
			cout<<"NO"<<endl;
		else if(2*a > b && a%2==0 && b%2==1)
			cout<<"NO"<<endl;
		else if(2*a > b && a%2==1 && b%2==0)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
}