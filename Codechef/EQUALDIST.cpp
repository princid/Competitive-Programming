#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T, A, B;
	cin >> T;
	while(T--){
	    cin >> A >> B;
	    if((A+B)%2 == 0)
	        cout << "YES" << endl;
	    else
	        cout << "NO" << endl;
	}
	return 0;
}
