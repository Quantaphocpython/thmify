#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float __sum(int n) {
	float sum=sqrt(2);
	if (n==1) {
		return sum;
	}
	else if (n>1) {
		for (int i=0;i<n-1;i++) {
			sum=sqrt(2+sum);
		}
		return sum;
	}
}

int main() {
	int n; cin>>n;
	int arr[n];
	for (int i=0;i<n;i++) {
		cin>>arr[i];
	}
	
	float a;
	for (int i=0;i<n;i++) {
		a=__sum(arr[i]);
		cout<<fixed<<setprecision(5)<<a<<endl;
	}
	
	return 0;
}
