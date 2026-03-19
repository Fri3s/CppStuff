#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

//SHELL GAME 2019 DECEMBER


int main(){
	ifstream fin("shell.in");
    ofstream fout("shell.out");
	/*
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	*/
	int n;
	fin >> n;
	vector<int> guesses(n);
	vector<vector<int>> positions(n);
	vector<int> currentPos{1,2,3};
	for (int i = 0; i < n; i++) {
		int a, b, g;
		fin >> a >> b >> g;
		swap(currentPos[a-1], currentPos[b-1]);
		positions[i] = currentPos;
		guesses[i] = g;
	}
    int i = 3;
	vector<int> scores(3, 0);
	while(i){
		for (int p = 0; p < n; p++){
			if (positions[p][guesses[p]] == i) scores[i-1]++;
		}
		i--;
	}

	sort(scores.begin(), scores.end());
	fout << scores[2] << "\n";
}