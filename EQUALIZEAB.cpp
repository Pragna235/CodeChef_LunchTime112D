#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t>0)
	{
	    long long a,b,x,d;
	    cin>>a>>b>>x;
	    if((b-a)%(x*2)==0) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    t--;
	}// your code goes here
	return 0;
}