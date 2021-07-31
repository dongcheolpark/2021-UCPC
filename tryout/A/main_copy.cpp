#include <iostream>
#include <string>

using namespace std;

int len(int x) {
	if(x == 0) return 1;
	int i = 0;
	for(;x>0;x/=10,i++);
	return i;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	string str;
	cin>>str;
	int first = 0,end = 0;
	int k = 0;
	for(int i = 1;i<=3;i++) {
		int a=0,b=0;
		for(int j = 0;j<i;j++) {
			a = a*10 + (str[j]-'0');
		}
		for(int j = i;j<i*2+1;j++) {
			b = b*10 + (str[j]-'0');
			if(b == 0) break;
			if(a+1 == b) {
				first = a;
				k = i;
			};
		}
	}
	if(first == 0) {
		cout<<str<<" "<<str<<"\n";
		return 0;
	}
	int tmp = first;
	for(int i = 0;i<str.length();i+=k) {
		end = tmp;
		k = len(tmp);
		tmp++;
	}
	cout<<first<<" "<<end<<"\n";
}