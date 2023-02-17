#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    if(10*X >= Y){
	        cout << (Y*Z) << endl;
	    }
	    else
	        cout << (10*X)*Z << endl;
	}
	return 0;
}
