#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y,D;
	    cin >> X >> Y >> D;
	    int Z = abs(X-Y);
	    if(Z>D) cout << "NO" << endl;
	    else cout << "YES" << endl;
	}
	return 0;
}
