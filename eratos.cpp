#include <iostream>
using namespace std;

int prime[10000];
void sieve() {
	for (int i=0;i<10000;i++) {
		prime[i]=1;
	}
	prime[1]=prime[0]=0;
	for (int i=2;i<=100;i++) {
		if (prime[i]==1) {
			for (int j=i*i;j<=10000;j+=i) {
				prime[j]=0;
			}	
		}
	}
	
	for (int i=0;i<10000;i++) {
		if (prime[i]==1)
			cout<<i<<' ';
	}
}

int main() {
	sieve();
	return 0;
}