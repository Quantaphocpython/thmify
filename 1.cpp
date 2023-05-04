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
	for(int i=1;i<n;i++) {
		for(int j=0;j<m;j++) {
			if(j==0) a[j][i]+=max(a[j][i-1],a[j+1][i-1]);
			else if(j==m-1) a[j][i]+=max(a[j][i-1],a[j-1][i-1]);
			else a[j][i]+=max(a[j-1][i-1],max(a[j][i-1],a[j+1][i-1]));
		}
	}
	int res=a[0][n-1];
	for(int i=1;i<m;i++) {
		if (a[i][n-1]>res) res=a[i][n-1];
	}
	cout<<res<<endl;
    return 0;
}
