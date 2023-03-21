#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y,M;
	    cin >> X >> Y >> M;
	    int rent = X*M;
	    if(rent < Y) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
