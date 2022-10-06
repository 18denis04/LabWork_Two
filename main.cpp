#include <iostream>
#include <string>

class Duck {
 public:
  std::string my_name = "Tom";
  int age = 0;

  void say_name() {
    std::cout << "My name is " << my_name << "!\n";
  }

  void swim(){
    std::cout << "I'm swimming!! Yachuuu!\n";
  }

  void fly(){
    std::cout << "I belive, I can fly!\n"
  }

  void go(){
    std::cout << "I can rum away from you)\n";
  }

};

int main() {
  Duck my_duck;

  my_duck.say_name();

  my_duck.my_name = "John";
  my_duck.say_name();

  my_duck.swim();

  my_duck.fly();

  my_duck.go();

  return 0;
}
