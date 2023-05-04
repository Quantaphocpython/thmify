#include <bits/stdc++.h>
using namespace std;
int main() {
	int m,n; cin>>m>>n;
	int arr[m][n],dp[m][n];
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) cin>>arr[i][j];
	}
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			if(arr[i-1][j] && arr[i][j-1] && arr[i-1][j-1] && i && j && arr[i][j]){
				arr[i][j]+=min(arr[i-1][j],min(arr[i][j-1],arr[i-1][j-1]));
			}
		}
	}
	cout<<endl;
	
	int res=0;
	for(int i=0;i<m;i++) {
		for(int j=0;j<n;j++) {
			if(arr[i][j]>res) res=arr[i][j];
		}
	}
	cout<<res;
}