#include <iostream>
//#include <array>
#include <vector>
#include <string>
//#include <string_view>

//void iterators();
//void vectorPractice();
//void stringPractice();
//void stringViewPractice();
void pairPractice();
void printVector(std::vector<int> v);

int main(){
    pairPractice();
    return 0;
}

void pairPractice(){
    std::pair<int, std::string> mypair{15, "Luke"};
    std::pair<int, int> anotherPair = std::make_pair(67, 76);

    cout << "Possible to edit pairs after initialization" << "\n";
    mypair.second = "Luke Xie";

    cout << "Use tuple methods on pairs" << "\n";
    cout << "Size of pair is " << anotherPair.tuple_size() << ", 2nd element is " 
    << anotherPair.tuple_element(1) << "\n";
}

/*
void stringViewPractice(){ //string_view is read only std::string
    using namespace std::string_view_literals;//access sv suffix
    
    std::string str = "Hello, World";
    std::string_view sv {str};
    //IMP string_view can be created fromstring, c string, string_view
    std::string s{sv};
    std::cout << s << static_cast<std::string>(sv) << "\n";
    //IMP string_view does not implicitly convert to string
}
    */
/*
void stringPractice(){
  using namespace std::string_literals; //IMP access to s suffix//

  std::cout << "Enter full name: ";
  std::string name{};
  std::getline(std::cin >> std::ws, name); //IMP std:ws means ignore whitspace,\n, etc...//
  //std::cout << "Your name is " << name << "\n"; 
  std::cout << "Length of name is " << static_cast<int>(name.length()) -1 << "\n";
  //IMP std::length returns unsigned int//
  
  std::cout << "Double quoted strings are C-style by default"s << "\n";
  //IMP s after double quote string to convert to std::string//
}
*/

void printVector(std::vector<int> v){

    for(std::vector<int>::iterator it = v.begin(); it != v.end(); it++){
        std::cout << *it << "  ";
    }
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