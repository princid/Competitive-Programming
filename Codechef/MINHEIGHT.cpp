#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, H;
	cin >> T;
	while(T--){
	    cin >> X >> H;
	    if(X>=H)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}

