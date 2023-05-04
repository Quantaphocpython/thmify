#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q; cin>>q;
    while (q--) {
        long long m,n; cin>>m>>n;
        long long arr[m+10][n+10]={0};
       	long long arr2[m+10][n+10]={0};
        for (int i=1;i<=m;i++) {
            for (int j=1;j<=n;j++) cin>>arr[i][j];
        }
        for (int i=1;i<=m;i++) {
            for (int j=1;j<=n;j++) {
                long long sum=0;
                for (int a=i-1;a<=i+1;a++) {
                    for (int b=j-1;b<=j+1;b++) {
                        if (a>=1 && a<=m+1 && b>=1 && b<=n+1) sum+=arr[a][b];
                     }
                }
                arr2[i][j]=sum;
            }
        }
        for (int i=1;i<=m;i++) {
            for (int j=1;j<=n;j++) cout<<arr2[i][j]<<' '; 
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
