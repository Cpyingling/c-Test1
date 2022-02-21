/*Author Charles Yingling
Date 2/21/22*/
#include <iostream>
#include <string>

using namespace std;

int main() {
  while(true) {
  int weight;
  double height;
  string answer;
  cout << "Please enter weight(in kilograms)\n";
  cin >> weight;
  cout << "Please enter height(in meters)\n";
  cin >> height;
  int bmi = (height*height) * weight;

  if (bmi < 18.5) {
    cout << "you are Underweight\n";
  } else if (bmi > 18.5 && bmi < 24.9) {
    cout << "you are  Healthy Weight\n";
  } else if (bmi > 25) {
    cout << "you are  Overweight\n";
  }
  cout << "do you wish to calculate BMI for another person? y/n\n";
  cin>>answer;
    if(answer == "y"){
        continue;
        }else if(answer =="n"){
        break;
        }
  }
  return 0;
}