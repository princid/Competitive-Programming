#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N, K;
	cin >> T;
	while(T--){
	    cin >> N >> K;
	    if(N<K)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
