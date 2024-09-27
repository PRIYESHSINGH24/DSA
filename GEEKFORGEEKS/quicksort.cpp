public:
    void quickSort(int arr[], int low, int high) {
        if (low < high) {
            int pindex = partition(arr, low, high);
            quickSort(arr, low, pindex - 1);
            quickSort(arr, pindex + 1, high);
        }
    }

    int partition(int arr[], int low, int high) {
        int pivot = arr[low];
        int i = low;
        int j = high;
        
        while (i < j) {
            while (arr[i] <= pivot && i < high)
                i++;
            while (arr[j] > pivot && j > low)
                j--;
            if (i < j)
                swap(arr[i], arr[j]);
        }
        
        swap(arr[low], arr[j]);
        
        return j;
    }
};