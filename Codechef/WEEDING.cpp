#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool killAllWeeds(vector<int> arr, int M, int K){
    int N =arr.size();
    
    for(int i = 0; i < N; i++){
        if(M < arr[i] + K - 1){
            return false;
        }
    }
    return true;
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N,M,K;
	    cin >> N >> M >> K;
	    
	    vector<int> arr(N);
	    
	    for(int i = 0; i < N; i++){
	        cin >> arr[i];
	    }
	    
	    if(killAllWeeds(arr, M, K)){
	        cout << "YES" << endl;
	    }
	    else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
