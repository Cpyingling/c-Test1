/*Author Charles Yingling
Date 2/21/22*/

/*Create a replIT called Test1

Body Mass Index is a simple calculation using a person's height and weight. The
formula is BMI = kg/m2 where kg is a person's weight in kilograms and m2 is
their height in metres squared.

A BMI of 25.0 or more is overweight, while the healthy range is 18.5 to 24.9.
Anything lower than 18.5 is underweight.

Write a program that calculates BMI  by:

a) asks for weight in kilograms and height in meters, and

b) calculates the BMI

c) announces if the person is overweight, healthy or underweight.

d) asks "do you wish to calculate BMI for another person? y/n". If answer is
"y", program will again go to step a.

if the answer is "n", program will terminate.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
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
  while(true) {
    if(answer = 'y'){
        continue;
        }else if(answer ='n'){
        break;
        }
  }
}