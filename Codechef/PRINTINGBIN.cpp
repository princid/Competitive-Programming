#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N;
	    cin >> N;
	    int arr[N];
	    
	    for(int i=0; i<N; i++){
	        cin >> arr[i];
	    }
	    
	    for(int i=0; i<N; i++){
	        if(arr[i] == 0){
	            cout << 1 << " ";
	        }
	        else{
	            cout << 0 << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}
