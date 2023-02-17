#include <iostream>
using namespace std;

int main() {
	// your code goes here
	
	float T, A, X, B, Y;
	cin >> T;
	
	while(T--){
	    
	    cin >> A >> X >> B >> Y;
	    
	    if(A/X > B/Y)
	        cout << "ALICE" << endl;
	    else if(A/X == B/Y)
	        cout << "EQUAL" << endl;
	    else
	        cout << "BOB" << endl;
	}
	return 0;
}
