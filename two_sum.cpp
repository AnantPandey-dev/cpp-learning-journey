#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cout << "Enter size of array : ";
    cin >> n;
    vector<int> nums;
    cout << "Enter values : "; 
    for(int i=0; i<n; i++){
        int x;
        cin>> x;
        nums.push_back(x);
    }
    int target;
    cout << "Enter sum : ";
    cin >> target;
    for(int i=0; i<nums.size(); i++){
        for(int j=i+1; j<nums.size(); j++){
            if(nums.at(i) + nums.at(j) == target){
                cout << i+1 << " and " << j+1 << "\n";
            }
        }
    }
}