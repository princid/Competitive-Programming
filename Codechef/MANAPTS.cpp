#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X, Y;
	    cin >> X >> Y;
	    if(X <= Y){
	        cout << Y/X << endl;
	    }
	    else
	        cout << "0" << endl;
	    
	}
	return 0;
}
