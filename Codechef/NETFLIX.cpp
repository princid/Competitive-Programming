#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B,C,X;
	    cin >> A >> B >> C >> X;
	    if(A+B >= X || B+C >= X || C+A >= X){
	        cout << "YES" << endl;
	    }
	    else cout << "NO" << endl;
	}
	return 0;
}
