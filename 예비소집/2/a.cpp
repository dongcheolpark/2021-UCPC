#include <iostream>
#include <string>
#include <cmath>

using namespace std;

bool chk = false;

int len(int a) {
	int i = 0;
	for(;a>0;a/=10,i++);
	return i;
}

void func(int x) {
	if(x<=0) {
		return;
	}
	int a = x;
	if(x/10) {
		a-= len(x) + 1;
	}
	else a-=2;
	func(a);
	if(x!=1) cout<<"-";
	if(chk && x == 18) {
		cout<<"1";
		return;
	}
	cout<<x;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin>>n;
	while(n--) {
		long long a,b;
		cin>>a>>b;
		int x = 0;
		chk = false;
		if(b>=3 || a>=21 || a*pow(10,b) >= 21) {
			chk = true;
			if(a%3 == 0) {
				x = 18;
			}
			else if(a%3 == 1) {
				x = 16;
			}
			else if(a%3 == 2) {
				x = 17;
			}
		}
		else x = a*pow(10,b);
		func(x);
		if(chk) {
			if(x == 16) cout<<"-";
			cout<<"...";
		}
		cout<<"\n";
	}
}