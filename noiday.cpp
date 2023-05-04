#include <iostream>
using namespace std;
int main() {
	long long n,cnt=0,tmp,a; cin>>n;
	int arr[n],b[10000]={0};
	for(int i=0;i<n;i++) {
		cin>>arr[i];
		b[arr[i]]=arr[i];
	}
	for(int i=0;i<100;i++) {
		if(b[i]) {
			tmp=b[i];
			a=i;
			break;
		}
	}
	for(int i=a+1;i<10000;i++) {
		if(b[i]) {
			tmp+=b[i];
			cnt=cnt+tmp;
		}
		
	}
	cout<<cnt;
}