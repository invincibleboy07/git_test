#include<iostream>
using namespace std;


int main()
{
	int t;
	cin>>t;
	while(t--)//case
	{
		int a,b;
		cin>>a>>b;
		if(a>b)
			cout<<">";
		else if(a<b)
			cout<<"<";
		else
			cout<<"=";
		cout<<"\n";
	}
	return 0;
}
