#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, Y;
	cin >> T;
	while(T--){
	    cin >> X >> Y;
	    if(X>=Y)
	        cout << (X-Y) << endl;
	    else
	        cout << "0" << endl;
	}
	return 0;
}
