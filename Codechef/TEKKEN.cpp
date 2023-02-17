#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B,C;
	    cin >> A >> B >> C;
	    if(A-abs(B-C)>0) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
