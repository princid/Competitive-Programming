#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T, X, Y, A;
	cin >> T;
	
	while(T--){
	    
	    cin >> X >> Y >> A;
	    
	    if(X <= A && A < Y){
	        cout << "YES" << endl;
	    }
	    else
	        cout << "NO" << endl;
	}
	return 0;
}

