#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    Y<X;
	    cout << (4*X) + Y << endl;
	}
	return 0;
}
