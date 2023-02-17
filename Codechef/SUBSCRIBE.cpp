#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X;
	cin >> T;
	while(T--){
	    cin >> X;
	    if(X>30)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
