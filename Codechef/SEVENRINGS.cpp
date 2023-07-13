#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N, X;
	    cin >> N >> X;
	    int bill = N*X;
	    if(bill >= 10000 && bill <= 99999){
	        cout << "YES" << endl;
	    }
	    else cout << "NO" << endl;
	}
	return 0;
}
