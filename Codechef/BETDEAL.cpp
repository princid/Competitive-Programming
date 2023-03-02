#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B;
	    cin >> A >> B;
	    int FP = 100-A;
	    int SP = 200-(2*B);
	    if(FP<SP) cout << "FIRST" << endl;
	    else if(FP>SP) cout << "SECOND" << endl;
	    else cout << "BOTH" << endl;
	}
	return 0;
}
