#include <iostream>
using namespace std;

int main(){
    //declaring the array

    int size;
    cout << "Enter size of array : ";
    cin >> size;
    float arr[size];
    cout << "Enter elements of array : ";
    for(int i=0; i<size; i++){
        cin >> arr[i];
    }
    int x, result = -1;
    cout << "Enter number to be found : ";
    cin >> x;
    //linear search

    for(int i=0; i<size; i++){
        if(arr[i]==x){
            result = i;
            break;
        }
    }
    if(result !=-1){
        cout << "Found at : " << result << endl;
    }else{
        cout << "Not found" << endl;
    }
}