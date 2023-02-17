#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, Y;
	cin >> T;
	while(T--){
	    cin >> X >> Y;
	    if(X>Y)
	        cout << "A" << endl;
	    else if(X<Y)
	        cout << "B" << endl;
	}
	return 0;
}

