#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, N, X, Y;
	cin >> T;
	while(T--){
	    cin >> N >> X >> Y;
	    if(X==Y || Y==0 || (Y%X==0))
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
