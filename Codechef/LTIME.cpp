#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X;
	cin >> T;
	while(T--){
	    cin >> X;
	    if(1<=X & X<=4)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
