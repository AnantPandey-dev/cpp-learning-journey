#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5]={1,2,3,4,5};
    //all subarrays
    // for(int st=0; st<n; st++){
    //     for(int end=st; end<n; end++){
    //         for(int i=st; i<=end; i++){
    //             cout << arr[i];
    //         }cout << " ";
    //     }cout << endl;
    // }
    // //Maximum subarray sum
    // int maxsum=INT_MIN;
    // for(int st=0; st<n; st++){
    //     int currsum=0;
    //     for(int end=st; end<n; end++){
    //         for(int i=st; i<=end; i++){
    //             currsum+=arr[i];
    //             maxsum=max(currsum,maxsum);
    //         }
    //     }
    // }
    // cout << "Max subarray sum = " << maxsum << endl;

    //kadane's algo

    int maxsum=0;
    for(int i=0; i<n; i++){
        int currsum=0;
        for(int j=i; j<n; j++){
            currsum+=arr[j];
            maxsum=max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            }
        }
    }cout << "Max subarray sum = " << maxsum << endl;
}