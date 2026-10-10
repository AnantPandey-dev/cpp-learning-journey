#include <iostream>
using namespace std;
int main() {
int number, temp, remainder, i, power, digits = 0, sum = 0;
cout << "Enter a number: ";
cin >> number;
temp = number;
while (temp!=0) {
    digits++;
    temp = temp /10;
    }
temp = number;
while (number!=0) {
    remainder = number % 10;
    i= 1;
    power = 1;
    while (i<=digits) {
        power = power * remainder;
        i++;
    }
    sum = sum + power;
    number = number /10;
    }
if (sum == temp) {
    cout << "The given number " << temp << " is an armstrong number\n";
    } 
else {
    cout << "The given number " << temp << " is not an armstrong number\n";
    }
}