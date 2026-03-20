#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void pourBucket(vector<tuple<int, int, int>>& curretnAmounts, int i){

}

int main(){
	freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);

	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	vector<int> capacities(3);
	vector<int> amounts(3);

	for (int i = 0; i < 3; i++) cin >> capacities[i] >> amounts[i];

	for (int i = 0; i < 100; i++){
		int b = i%3, b2 = (i+1)%3;

		int pourAmount = min(capacities[b2] - amounts[b2], amounts[b]);
		amounts[b] -= pourAmount, amounts[b2] += pourAmount;
	}

	for (auto& a : amounts) cout << a << "\n";
}

/*
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
*/