#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Integer{
  int value;
public:
  int operator+(Integer obj){
    return this->value + obj.value;
  }
  Integer(int value2){value =  value2;}
};

class String{
  char *str;
  String operator=(char *str){
    this->str = str;
  }
}

int main(){
  Integer obj1(10), obj2(1000);
  cout << "obj1 + obj2 = " << obj1 + obj2 << endl;
}
