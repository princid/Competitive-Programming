#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int A,B,X,Y;
	cin >> A >> B >> X >> Y;
	int M_points = A*2 + B;
	int R_points = X*2 + Y;
	
	if(M_points == R_points) cout << "Equal" << endl;
	else if(M_points > R_points) cout << "Messi" << endl;
	else cout << "Ronaldo" << endl;
	return 0;
}
