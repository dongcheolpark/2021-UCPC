#include <iostream>
#include <cmath>
#include <stack>
#include <string>

using namespace std;

void func(int x) {

}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin>>n;
	while(n--) {
		int a,b;
		cin>>a>>b;
		stack<int> s;
		int x = a*pow(10,b) >= 21 ? 21 : a*pow(10,b);
		func(x);
		if(x == 21) {
			cout<<"...";
		}

	}
}