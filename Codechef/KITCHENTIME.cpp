#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    if(1<=X && X<Y && Y<=12) cout << Y-X << endl;
	}
	return 0;
}
