#include <iostream>
#include <vector>
using namespace std;
int main(){
    //Taking input
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter values : "; 
    for(int i=0; i<n; i++){
        cin>> nums[i];
    }
    
    //Reverse array

    for(int i=0; i<n/2; i++){
        swap(nums[i],nums[n-1-i]);
    }

    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }cout << endl;
}