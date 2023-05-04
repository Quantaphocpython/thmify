#include <iostream>
#include <vector>

using namespace std;

int main() {
    int q, n, i, j;
    cin >> q >> n;

    // Create a vector of vectors to represent the 2D array
    vector<vector<int>> a(n);

    // Read the input array values
    for (int k = 0; k < n; k++) {
        int size;
        cin >> size;
        a[k].resize(size);
        for (int l = 0; l < size; l++) {
            cin >> a[k][l];
        }
    }
	for(int i=0;i<n;i++){
		cout<<a[i]<<' ';
	}
    // Process the queries
    for (int m = 0; m < q; m++) {
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}