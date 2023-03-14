#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int W,X,Y,Z;
	    cin >> W >> X >> Y >> Z;
	    1 <= W,X,Y,Z && W,X,Y,Z <= 1000;
	    if(W<X){
	        int required_water = X-W;
	        if(required_water == Y*Z) cout << "Filled" << endl;
	        else if(required_water > Y*Z) cout << "Unfilled" << endl;
	        else cout << "OverFlow" << endl;
	    }
	    else cout << "OverFlow" << endl;
	}
	return 0;
}
