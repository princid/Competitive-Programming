#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X, Y;
	cin >> T;
	while(T--){
	    cin >> X >> Y;
	    if(X<Y)
	        cout << X << endl;
	    else if((X%Y)==0)
	        cout << (X/Y) << endl;
	    else
	        cout << (X%Y)+(X/Y) << endl;
	    
	}
	return 0;
}
