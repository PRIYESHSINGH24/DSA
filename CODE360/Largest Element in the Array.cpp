
int largestElement(vector<int> &arr, int n) {
    if(n == 0) {
        cout << "Array is empty" << endl;
        return -1;
    }
    
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
