#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X1,X2,Y1,Y2;
	    cin >> X1 >> Y1 >> X2 >> Y2;
	    int P = abs(X1-X2);
	    int Q = abs(Y1-Y2);
	    
	    int S = max(P,Q);
	    cout << S << endl;
	}
	return 0;
}
