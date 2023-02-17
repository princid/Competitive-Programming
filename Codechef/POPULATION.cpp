#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, Y, Z;
	cin >> T;
	while(T--){
	    cin >> X >> Y >> Z;
	    cout << (X-Y)+Z << endl;
	}
	return 0;
}
