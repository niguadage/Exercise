
#include <iostream>
#include<string>
  using namespace std;

class Human {
  private:string Name;
  int age;

public:
    Human() {
    age = 0;
    cout << "Construction of  an  instance of  class  Human" << endl;
  } void SetName(string HumanName) {
    Name = HumanName;
  }

  void SetAge(int HumanAge) {
    age = HumanAge;
  }

  void IntroduceSelf() {
    cout << "i.am " + Name << " and am ";
    cout << age << " years old" << endl;
  }
};


int main() {
  Human FirstMan;
  FirstMan.SetName("Adam");
  FirstMan.SetAge(30);

  Human FirstWoman;
  FirstWoman.SetName("Eve");
  FirstWoman.SetAge(28);

  FirstMan.IntroduceSelf();
  FirstWoman.IntroduceSelf();
}