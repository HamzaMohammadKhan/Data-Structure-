#include<iostream>

using namespace std;

int sequientialSearch(int array[], int size, int target){
    int x;
    for( x=0 ; x < size ; x++){
        if (target == array[x])
        {
          return x;
        }
    }
    return -1;
}


int main(){
int arr[] = {1,2,3,4,5,6,7,8};

//size of array
int index = 8;

//out target element we want to search
int target;
cout << "Your target Element : ";
cin >> target;

//return variable
int x;

//algorith for finding the element
int result = sequientialSearch(arr, index, target);
if(result >= 0){
    cout << "element is in the list " << endl;
}
else{
    cout << "element is not in the list" << endl;
}
}