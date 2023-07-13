#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    float N,X;
	    cin >> N >> X;
	    float half = N/2;
	    if(X >= half) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
