#include <iostream>
using namespace std;

sum(int arr[], int size) {
    if (size <= 0)
        return 0;
    else
        return arr[size - 1] + sum(arr, size - 1);
}
int main() {
    int arr[10]={0,1,2,3,4,5,6,7,8,9};

    cout << "Sum of array elements = " << sum(arr,10) << endl;
}