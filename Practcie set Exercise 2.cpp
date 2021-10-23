#include<iostream>

using namespace std;

void BinarySearch(int arr[], int size, int target){
int x;
int mid;
while(x <= size){
        mid = (x + size)/2;
if(target > arr[mid]){
            x = mid + 1;
        }else if(target < arr[mid]){
            size = mid - 1;
        }else{
            target == arr[mid];
            x = size + 1;
        }
    }
    int x = mid;
    if(target == arr[mid]){
        cout << " Element found " << endl;
    }
    else{
        cout << "Not found" << endl;
    }

}



int main(){
    int arr[] = {8,13,17,26,44,56,88,97};
    int target;
    cout << "Enter element you want to search :";
    cin >> target;
    
    int first = 0;
    int last = sizeof(arr)/sizeof(arr[0]);
    BinarySearch(arr, last, target);
    
}