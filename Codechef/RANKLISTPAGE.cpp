#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X;
	    cin >> X;
	    if(X%25 == 0) cout << X/25 << endl;
	    else cout << (X/25)+1 << endl;
	}
	return 0;
}
