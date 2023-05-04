#include <bits/stdc++.h>
using namespace std;
int main() {
	int m,n; cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			cin>>a[i][j];
		}
	}
	for(int i=1;i<m;i++) {
		for(int j=0;j<n;j++) {
			if(j==0) a[i][j]+=max(a[i-1][j],a[i-1][j+1]);
			else if(j==n-1) a[i][j]+=max(a[i-1][j],a[i-1][j-1]);
			else a[i][j]+=max(a[i-1][j],max(a[i-1][j+1],a[i-1][j-1]));
		}
	}
	int res=INT_MIN;
	for(int j=0;j<n;j++) {
		res=max(res,a[m-1][j]);
	}
	cout<<res;
}