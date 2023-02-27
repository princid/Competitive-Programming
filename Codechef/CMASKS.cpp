#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    int P = X*100;
	    int Q = Y*10;
	    if(Q>P) cout << "Disposable" << endl;
	    else cout << "Cloth" << endl;
	}
	return 0;
}
