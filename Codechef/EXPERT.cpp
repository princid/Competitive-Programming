#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    double X, Y;
	    cin >> X >> Y;
	    if((X*50)/100 <= Y ) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
