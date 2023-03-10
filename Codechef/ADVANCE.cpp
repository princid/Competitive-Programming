#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X, Y;
	    cin >> X >> Y;
	    int Z = X+200;
	    if(Y>=X && Y<=Z) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
