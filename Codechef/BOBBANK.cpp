#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	int T, W, X, Y, Z;
	cin >> T;
	
	while(T--){
	    
	    cin >> W >> X >> Y >> Z;
	    
	    cout << W+((X-Y)*Z) << endl;
	    
	}
	return 0;
}
