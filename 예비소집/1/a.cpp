#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int x = (c*e - f*b)/(a*e-d*b),y = (c*d-a*f)/(b*d-a*e);
	cout<<x<<' '<<y;

}