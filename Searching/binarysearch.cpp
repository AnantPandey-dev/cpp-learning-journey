#include <iostream>
using namespace std;
int main(){

    //Enter array

    int n, target;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    //Bubble sort
    
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    //Binary search

    cout << "Enter target number";
    cin >> target;

    int l,u,m,c=0;
    bool flag = false;
    for(int i=0; i<n; i++){
        l=0;
        u=n-1;
        m=(l+u)/2;
        if(arr[m]<target){
            l=m;
        }else if(arr[m]>target){
            u=m;
        }else if(arr[m]==target){
            flag=true;
            c=i;
        }
    }if(flag){
        cout << "Element found at " << c << endl;
    }else{cout << "Element ot found :( ";}
}