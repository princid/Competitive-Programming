#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y,Z,P,Q;
	    cin >> X >> Y >> Z;
	    P = Z-Y;
	    Q = P/X;
	    cout << Q << endl;
	}
	return 0;
}
