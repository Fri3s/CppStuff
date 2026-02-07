#include <iostream>
//#include <array>
#include <vector>

void iterators();
void vectorPractice();

int main(){
    //iterators();
    return 0;
}

void vectorPractice(){
    std::vector<int> v{1, 2, 3};
    
}

void iterators(){
    std::vector<int> v{1, 5, 4, 3, 8};
    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
        std::cout << *it << "  ";
    }
    std::cout << "\n";
}