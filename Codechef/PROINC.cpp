#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    int B = X-Y;
	    int S = X + X/10;
	    int P = S-B;
	    cout << P << endl;
	}
	return 0;
}
