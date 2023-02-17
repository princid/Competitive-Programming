#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, X;
	cin >> T;
	while(T--){
	    cin >> X;
	    if(67<=X && X<=45000)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}

