#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int binarysearch(int arr[], int n, int k) {
        // code here
        int solutionIfNotFound = -1;
        int high = n -1;
        int low = 0;
        int mid;
        while (low != high ){
            mid = (low + high) / 2;
            if (arr[mid]== k){
                return mid;
            }
            else if (k > arr[mid]){
                low = mid + 1;
            }
            else {
                high = mid -1;
            }
            
           
        }
        return solutionIfNotFound;
        
    }


    int binarySearchRecursive(int arr[], int high , int low, int k){
        int mid = (low + high ) / 2;
        if (low > high){
            return -1;
        }
        else {
        
        if (arr[mid] == k){
            return mid;
        }
        else if (k < arr[mid]){
            high = mid -1;
            binarySearchRecursive(arr, high , low,  k);
        }
        else {
            low = mid + 1;
            binarySearchRecursive(arr ,high , low, k);
        }
        }
    }


int main(){
    ll length; cin >> length;
    int arr[length];
    for (int i = 0; i < length ; i ++){
        int a; cin >> a;
        arr[i] = a;

    }
    // comment out each one to analyze each ouptut
    //  cout << binarysearch(arr, length, 4) << endl;
    cout << binarySearchRecursive(arr, length, 0, 2);
    return 0;
}