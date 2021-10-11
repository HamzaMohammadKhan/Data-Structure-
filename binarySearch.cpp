#include <iostream>

using namespace std;

int main()
{
    //array 
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18};
    
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
            first_index = last_index + 1;
        }
    }
    
    return 0;
}
