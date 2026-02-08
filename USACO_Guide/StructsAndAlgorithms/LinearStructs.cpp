#include <iostream>
//#include <array>
#include <vector>
#include <string>

//void iterators();
//void vectorPractice();
void stringPractice();
void printVector(std::vector<int> v);

int main(){
    stringPractice();
    return 0;
}

void printVector(std::vector<int> v){

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
        std::cout << *it << "  ";
    }
}

void stringPractice(){
  std::cout << "Enter full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name);

  std::cout << "enter fav color";
  std::string color{};
  std::getline(std::cin >> std::ws, color);

  std::cout << "Your name is " << name << " and fav color is " << color << "\n"; 
}
/*
void vectorPractice(){
    std::vector<int> v{1, 2, 3};
    v.push_back(4);
    v.push_back(5);
    v.erase(v.end());
    v.erase(v.begin(), v.begin()+2);
    printVector(v);
}
*/

/*
void iterators(){
    std::vector<int> v{1, 5, 4, 3, 8};
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
        std::cout << *it << "  ";
    }
    std::cout << "\n";
}
*/
