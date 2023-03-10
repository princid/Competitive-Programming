#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int A, B;
	    cin >> A >> B;
	    0<=A<=6; 
	    0<=B<=6;
	    int max_point = max(A, B);
	    cout << 7-max_point << endl;
	}
	return 0;
}
