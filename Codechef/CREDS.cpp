#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T, X, Y, Z;
	cin >> T;
	
	while(T--){
	    cin >> X >> Y >> Z;
	    
	    cout << ((4*X) + (2*Y) + (0*Z)) << endl;
	}
	return 0;
}
