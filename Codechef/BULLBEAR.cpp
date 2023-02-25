#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    if(X>Y) cout << "LOSS" << endl;
	    else if(X == Y) cout << "NEUTRAL" << endl;
	    else cout << "PROFIT" << endl;
	}
	return 0;
}
