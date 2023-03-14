#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    int monthly_spend = Y*30;
	    if(monthly_spend<=X) cout << "YES" << endl;
	    else cout << "NO" << endl;
	}
	return 0;
}
