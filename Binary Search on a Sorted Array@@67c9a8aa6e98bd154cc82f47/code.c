int binarySearch(int arr[], int target, int l, int r){
    int mid = l + (r -2)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return binarySearch(arr, target, mid + 1, r);
    }
    else{
        return binarySearch(arr, target, l, mid = 1);
    }
}