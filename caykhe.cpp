#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	int n, m;
	cin>>n>>m;
	float arr[n][2];
	for (int i=0;i<n;i++) cin>>arr[i][1]>>arr[i][2];
	int sum=0;
	for (int i=0;i<n;i++) {
		int res=0;
		for (int j=i+1;j<n;j++) {
			res=arr[i][1]+arr[j][1];
			if (res<m) {
				int val=arr[i][2]+arr[j][2];
				if (sum<val) sum=val;
			}
			else continue;
		}
	}
	cout<<sum;
	return 0;
}
