#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//SHELL GAME 2019 DECEMBER


int main(){
	freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);

    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n;
	cin >> n;
	vector<int> positions{0,1,2};
	vector<int> scores(3,0);
	for(int i = 0; i < n; i++){
		int a, b, g;
		cin >> a >> b >> g;
		a--, b--, g--;
		scores[positions[g]]++;
		swap(positions[a], positions[b]);
	}

	cout << max({scores[0], scores[1], scores[2]}) << "\n";
}