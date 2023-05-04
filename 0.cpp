#include <iostream>
#include <cmath>
using namespace std;

int absnum(int a){
	return abs(a);
}

int main() {
	int t,n;
	cin>>t>>n;
	int arr[n];
	for (int i=0;i<n;i++) cin>>arr[i];
	for (int i=0;i<n;i++) arr[i]=absnum(arr[i]);
	for (int i=0;i<n;i++){
		for (int j=i+1;j<n;j++) {
			if (arr[i]>arr[j]) {
				int res=arr[i];
				arr[i]=arr[j];
				arr[j]=res;
			}
		}
	}
//	for (int i=0;i<n;i++) cout<<arr[i];
	int count=-1,sum=0;
	for (int i=0;i<n+1;i++) {
		if (t>sum) {
			sum += arr[i];
			count+=1;
		}
		else {
			cout<<count;
			break;
		}
	}

}
