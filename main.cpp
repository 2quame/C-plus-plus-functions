#include<iostream>
using namespace std;


// A function to be executed in the main function
int num(int num1, int num2) {
    cout<<"Enter first number:\n";
    cin>>num1;
    cout<<"Enter second number:\n";
    cin>>num2;
    int sum = num1+num2;
    return sum;

}


int main() {
       int num1, num2;
// calling the function aboove
  int sum =num(num1 , num2);
    cout<<"Sum of the numbers is:"<<sum<<"\n";// outputs the sum of the two numbers entered.

}











