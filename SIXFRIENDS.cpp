#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int X,Y;
	    cin >> X >> Y;
	    int double_room = X*3;
	    int triple_room = Y*2;
	    int lowest = min(double_room, triple_room);
	    cout << lowest << endl;
	}
	return 0;
}
