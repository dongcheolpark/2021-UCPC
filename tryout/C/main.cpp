#include <iostream>
#include <ratio>
#include <vector>

using namespace std;

const long double hun = 100;

vector<long double> v;

double sum() {
	double re = 1;
	for(auto &item : v) {
		if(item == v.back()) {
			re *= (item)/hun;
		}
		else {
			re *= (hun-item)/hun;
		}
	}	
	return re;
}
int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	double a,d,k;
	cin>>a>>d>>k;
	double res = 0;
	v.push_back(d);
	for(int i = 1;;i++) {
		res += a*i*sum();
		if(v.back() >= hun) break;
		v.push_back(v.back()+(d*k/hun));
	}
	cout<<res;
}