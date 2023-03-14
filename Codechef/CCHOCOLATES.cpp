#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y,Z;
	    cin >> X >> Y >> Z;
	    int total_money = X*5+Y*10;
	    if(total_money < Z) cout << 0 << endl;
	    else cout << total_money / Z << endl;
	}
	return 0;
}
