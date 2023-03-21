#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X;
	    cin >> X;
	    int P = (X*10)/100;
	    if(P>100) cout << P << endl;
	    else cout << 100 << endl;
	}
	return 0;
}
