#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin >> N;
	int count = 0;
	for(int i=1; i<=N; i++){
        for(int j=1; j<=N; j++){
            if(i+j == N)
                count++;
	        }
	    }
	cout << count << endl;
	return 0;
}
