#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B,C,X;
	    cin >> A >> B >> C >> X;
	    
	    int P = A+B;
	    int Q = A+C;
	    int R = B+C;
	    
	    if(P>=X || Q>=X || R>=X){
	        cout << "YES" << endl;
	    }
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
