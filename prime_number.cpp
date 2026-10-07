#include <iostream>
using namespace std;

int main() {
    int n, i = 2, count = 0; 
    
    cout << "Enter any number : ";
    cin >> n;
    
    while ( i <= n ) { 
        if ( n % i == 0 ) { 
            count++;
        }
        i++;
    }
    
    if (count == 1) { 
        cout << "The given number " << n << " is a prime number\n";
    } else {
        cout << "The given number " << n << " is not a prime number\n";
    }
}
