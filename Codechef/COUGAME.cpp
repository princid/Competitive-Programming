#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int G,B;
	    cin >> G >> B;
	    B>G;
	    cout << B-G << endl;
	}
	return 0;
}
