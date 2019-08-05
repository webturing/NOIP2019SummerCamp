#include<bits/stdc++.h>
using namespace std;

int main() {
	int a=123,b=45;
	//ab=12345 ba=45123
//cout<<a<<b<<" "<<b<<a<<endl;
	ostringstream oss;
	oss<<a<<b<<" "<<b<<a<<endl;
	string s=oss.str();
	cout<<s<<endl;
	istringstream iss(s);
	int x,y;
	iss>>x>>y;
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
	return 0;

}
