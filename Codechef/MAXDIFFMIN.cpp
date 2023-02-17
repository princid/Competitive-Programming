#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, A, B, C;
	cin >> T;
	while(T--){
	    cin >> A >> B >> C;
	    if(A>=B && A>=C && B>=C)
	        cout << (A-C) << endl;
	    else if(A>=B && A>=C && C>=B)
	        cout << (A-B) << endl;
	    else if(B>=A && B>=C && A>=C)
	        cout << (B-C) << endl;
	    else if(B>=A && B>=C && C>=A)
	        cout << (B-A) << endl;
	    else if(C>=A && C>=B && A>=B)
	        cout << (C-B) << endl;
	    else if(C>=A && C>=B && B>=A)
	        cout << (C-A) << endl;
	}
	return 0;
}
