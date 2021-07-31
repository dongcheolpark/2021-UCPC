#include <iostream>

using namespace std;

int arr[30][30],res[30][30];
int n,m;

void dfs(int x,int y,int a,int b) {
	if(x<0 || x>=n||y<0 || y>=m ) return;
	if(arr[x][y] != a) return;
	arr[x][y] = b;
	dfs(x+1,y,a,b);
	dfs(x-1,y,a,b);
	dfs(x,y+1,a,b);
	dfs(x,y-1,a,b);
}

int chk() {
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			if(arr[i][j] != res[i][j]) return 0;
		}
	}
	return 1;
}

int main() {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			cin>>arr[i][j];
		}
	}
	for(int i =0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			cin>>res[i][j];
		}
	}

	for(int i = 0;i<n;i++) {
		for(int j = 0;j<m;j++) {
			if(arr[i][j] != res[i][j]) {
				dfs(i,j,arr[i][j],res[i][j]);
				if(chk()) {
					cout<<"YES";
				}
				else cout<<"NO";
				return 0;
			}
		}
	}
	cout<<"YES";
}