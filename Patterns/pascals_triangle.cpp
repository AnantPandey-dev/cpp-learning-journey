#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " " ;
        }
        int x=1;
        for(int j=0; j<=i;j++){
            cout << x << " ";
            x=x*(i-j)/(j+1);
        }cout << endl;
    }
}