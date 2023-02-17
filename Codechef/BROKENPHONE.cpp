#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, Y;
	cin >> T;
	while(T--){
	    cin >> X >> Y;
	    if(X < Y)
	        cout << "REPAIR" << endl;
	    else if(X > Y)
	        cout << "NEW PHONE" << endl;
	    else
	        cout << "ANY" << endl;
	}
	return 0;
}
