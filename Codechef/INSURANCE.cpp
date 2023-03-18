#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    int rebated_amount = min(X,Y);
	    cout << rebated_amount << endl;
	}
	return 0;
}
