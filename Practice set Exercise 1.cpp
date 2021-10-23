#include <iostream>

using namespace std;


int main()
{
    //array 
    int arr[] = {8,13,17,26,44,56,88,97};
    
    //target element
    int target;
    
    cout << "Enter target element"<<endl;
    cin >> target;
    
    //first and last
    int first_index = 0;
    int last_index = sizeof(arr)/sizeof(arr[0]);
    
    //middle element 
    int mid;
    
    while(first_index <= last_index){
        mid = (first_index + last_index)/2;
        if(target > arr[mid]){
            first_index = mid + 1;
        }else if(target < arr[mid]){
            last_index = mid - 1;
        }else{
            target == arr[mid];
            first_index = last_index + 1;
        }
    }
    int x = mid;
    if(target == arr[mid]){
        cout << " Element found " << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    
    return 0;
}