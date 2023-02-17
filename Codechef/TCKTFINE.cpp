#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T, X, P, Q;
	cin >> T;
	
	while(T--){
	    
	    cin >> X >> P >> Q;
	    
	    cout << (P-Q)*X << endl;
	}
	return 0;
}
