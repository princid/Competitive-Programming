#include <iostream>
#include <vector>
#include <queue>
using namespace std;

struct Music{
    int length;
    int language;
    
    Music(int length, int language) : length(length), language(language) {}
};

int maxPlaylistLen(vector<Music>& musics, int L, int K){
    //making a min heap
    priority_queue<int, vector<int>, greater<int>> pq;
    
    int totalLen = 0;
    
    for(Music & music : musics){
        if(music.language == L){
            pq.push(music.length);
            totalLen += music.length;
            
            if(pq.size() > K){
                totalLen -= pq.top();
                pq.pop();
            }
        }
    }
    //using the ternary operator here
    return pq.size() == K ? totalLen : -1;
}

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    int N, K, L;
	    cin >> N >> K >> L;
	    vector<Music> musics;
	    
	    for(int i = 0; i < N; i++){
	        int Mi, Li;
	        cin >> Mi >> Li;
	        musics.push_back(Music(Mi, Li));
	    }
	    
	    cout << maxPlaylistLen(musics, L, K) << endl;
	}
	return 0;
}
