#include <iostream>
#include <string>

using namespace std;

int len(int x) {
	if(x == 0) return 1;
	int i = 0;
	for(;x>0;x/=10,i++);
	return i;
}

string mk_str(int x,int y) {
	string str;
	for(int i = x;i<=y;i++) {
		str.append(to_string(i));
	}
	return str;
}

void func(string str,int x,int y) {
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
		first = stoi(str);
		end = stoi(str);
		//cout<<str<<" "<<str<<"\n";
		return;
	}
	int tmp = first;
	for(int i = 0;i<str.length();i+=k) {
		end = tmp;
		k = len(tmp);
		tmp++;
	}
	//cout<<first<<" "<<end<<"\n";
	if(first != x || end != y) {
		cout<<x<<" "<<y<<" "<<first<<" "<<end<<endl;
		cout<<"error"<<endl;
	}
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	for(int i = 1;i<=999;i++) {
		for(int j = i;j<=999;j++) {
			func(mk_str(i,j),i,j);
		}
	}
}