#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X1,Y1,X2,Y2;
	    cin >> X1 >> Y1 >> X2 >> Y2;
	    int min_amount = min((X1+Y1), (X2+Y2));
	    cout << min_amount << endl;
	}
	return 0;
}
