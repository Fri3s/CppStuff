#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#include <unordered_map>
#include <limits.h>
//#include <map>

using namespace std;

//WEEK 1: DO YOU KNOW YOUR ABC's 

int main(){
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

  vector<uint32_t> nums(7);
  for (auto& n : nums) cin >> n;
  sort(nums.begin(), nums.end());
  
  uint32_t smallest_0 = nums[0], smallest_1 = nums[1];
  uint32_t abc_sum = nums[6];
  uint32_t other_num = abc_sum - smallest_0 - smallest_1;

  cout << smallest_0 << " " << smallest_1 << " " << other_num << "\n";
}

/*
//WEEK 1: WORD PROCESSOR

int main(){
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

  int n, k;
  cin >> n >> k;
  
  int used = 0;
  for (int i = 0; i < n; i++){
    string word;
    cin >> word;

    if (used == 0){
      cout << word;
      used += word.length();
    } else if (used + word.length() <= k){
      cout << " " << word;
      used += word.length();
    } else {
      cout << "\n" << word;
      used = word.length();
    }
  }

  cout << "\n";
}

//WEEK 1: BLOCKED BILLBOARD 2 

int main(){
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

  int feed_x1, feed_y1, feed_x2, feed_y2; 
  int mower_x1, mower_y1, mower_x2, mower_y2;
  cin >> mower_x1 >> mower_y1 >> mower_x2 >> mower_y2;
  cin >> feed_x1 >> feed_y1 >> feed_x2 >> feed_y2;

  bool rectangle;
  if ( (feed_x1 < mower_x1 && feed_x2 > mower_x2 && (feed_y2 > mower_y2 || feed_y1 < mower_y1)) ||
      (feed_y1 < mower_y1 && feed_y2 > mower_y2 && (feed_x2 > mower_x2 || feed_x1 < mower_x1))){
        rectangle = true; 
  } else rectangle = false;

  if (!rectangle) {
    cout << (mower_x2 - mower_x1)*(mower_y2 - mower_y1) << "\n";
    return 0;
  }

  int mowerOverlappedX = max(min(feed_x2, mower_x2) - max(feed_x1, mower_x1), 0);
  int mowerOverlappedY = max(min(feed_y2, mower_y2) - max(feed_y1, mower_y1), 0);
  //cout << mowerOverlappedX << " " << mowerOverlappedY << "\n";
  cout << (mower_x2 - mower_x1)*(mower_y2 - mower_y1) - (mowerOverlappedX)*(mowerOverlappedY) << "\n"; 
}



//WEEK 1: BLOCKED BILLBOARD

int main(){ 
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

  int bill1_x1, bill1_y1, bill1_x2, bill1_y2; 
  int bill2_x1, bill2_y1, bill2_x2, bill2_y2;
  int truck_x1, truck_y1, truck_x2, truck_y2;

  cin >> bill1_x1 >>  bill1_y1 >> bill1_x2 >> bill1_y2; 
  cin >> bill2_x1 >> bill2_y1 >> bill2_x2 >> bill2_y2;
  cin >>  truck_x1 >> truck_y1 >> truck_x2 >> truck_y2;
  
  cout << bill1_x1 <<  bill1_y1 << bill1_x2 << bill1_y2 << "\n";; 
  cout << bill2_x1 << bill2_y1 << bill2_x2 << bill2_y2 << "\n";
  cout <<  truck_x1 << truck_y1 << truck_x2 << truck_y2 << "\n";
  
  int totalArea = (bill1_x2 - bill1_x1)*(bill1_y2 - bill1_y1) + (bill2_x2 - bill2_x1)*(bill2_y2 - bill2_y1);
  int bill1OverlappedX, bill1OverlappedY, bill2OverlappedX, bill2OverlappedY;

  bill1OverlappedX = max(min(truck_x2, bill1_x2) - max(truck_x1, bill1_x1), 0);
  bill1OverlappedY = max(min(truck_y2, bill1_y2) - max(truck_y1, bill1_y1), 0);
  bill2OverlappedX = max(min(truck_x2, bill2_x2) - max(truck_x1, bill2_x1), 0);
  bill2OverlappedY = max(min(truck_y2, bill2_y2) - max(truck_y1, bill2_y1), 0);
  
  //cout << bill1OverlappedX << " " << bill1OverlappedY << " " << bill2OverlappedX << " " << bill2OverlappedY << "\n";
  //cout << totalArea << "\n";
  cout << totalArea - ((bill1OverlappedX*bill1OverlappedY) + (bill2OverlappedX*bill2OverlappedY)) << "\n";

}



//Week 1: Bucket Brigade

int main(){
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

  int barn[2], rock[2], lake[2];
  for (int i = 0; i < 10; i++){
    for(int c = 0; c < 10; c++){
      char input;
      cin >> input;
      //cout << input << " ";

      if (input == '.') continue;
      else if (input == 'B'){
        barn[0] = i;
        barn[1] = c;
      } else if (input == 'R'){
        rock[0] = i;
        rock[1] = c;
      } else if (input == 'L'){
        lake[0] = i;
        lake[1] = c;
      }
    }
    //cout << "\n";
  }

  int barn_x = barn[0], barn_y = barn[1], rock_x = rock[0], rock_y = rock[1], lake_x = lake[0], lake_y = lake[1];
  int cows = abs(barn_x - lake_x) + abs(barn_y - lake_y) -1;
  //cout << cows << "\n";
  if (barn_x == rock_x && rock_x == lake_x
        && ((barn_y < rock_y && rock_y < lake_y) || (lake_y < rock_y && rock_y < barn_y)) ) cows += 2;

  else if (barn_y == rock_y && rock_y == lake_y
              && ((barn_x < rock_x && rock_x < lake_x) || (lake_x < rock_x && rock_x < barn_x))) cows += 2;

  cout << cows << "\n";


}


//Week 1: Square Pasture
int main(){
  ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;

  int leftPoint = min(x1, x3), rightPoint = max(x2, x4);
  int topPoint = max(y2, y4), bottomPoint = min(y1, y3);

  int sideLength = max(rightPoint - leftPoint, topPoint - bottomPoint);
  cout << sideLength * sideLength << "\n";

}
*/

