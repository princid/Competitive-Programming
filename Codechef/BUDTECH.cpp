#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int R;
	    cin >> R;
	    int budget = R*1000;
	    int half_budget = budget/2;
	    int distribution = half_budget/5;
	    cout << distribution << endl;
	}
	return 0;
}
