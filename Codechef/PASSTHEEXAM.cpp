#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A,B,C;
	    cin >> A >> B >> C;
	    int sum = A+B+C;
	    if(sum>=100 && A>=10 && B>=10 && C>=10) cout << "PASS" << endl;
	    else cout << "FAIL" << endl;
	}
	return 0;
}
