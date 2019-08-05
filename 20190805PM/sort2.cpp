#include<bits/stdc++.h>
using namespace std;
struct Point {
	int x,y;
};
const int N=10;
Point p[N];
void show(){
	for(int i=0;i<N;i++)
	cout<<p[i].x<<" "<<p[i].y<<endl;
}
bool cmpX(Point a,Point b)
{
	return a.x<b.x;
}
Point me={50,50};
bool wechat(Point a,Point b){
	double d1=hypot(a.x-me.x,a.y-me.y);
	double d2=hypot(b.x-me.x,b.y-me.y);
	return d1<d2;
	
}
int main() {
	
	for(int i=0; i<N; i++) {
		p[i].x=rand()%100;
		p[i].y=rand()%100;

	}
	sort(p,p+N,cmpX);
//	show();
	sort(p,p+N,wechat);
	show();
	

	return 0;

}
