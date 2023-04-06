#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X, Y;
	    X>Y;
	    cin >> X >> Y;
	    int minutes_num = 1;
	    while(Y<X){
	        Y += minutes_num;
	        minutes_num++;
	    }
	    cout << minutes_num - 1 << endl;
	}
	return 0;
}
