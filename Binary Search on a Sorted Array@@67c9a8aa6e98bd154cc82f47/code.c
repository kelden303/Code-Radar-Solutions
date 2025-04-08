int binarysearch(int arr[], int target, int l, int r){
    int mid = l + (r -2)/2;

    if(arr[mid] == target){
        return mid;
    }
    else if(arr[mid] < target){
        return binarysearch(arr, target, mid + 1, r);
    }
    else{
        return binarysearch(arr, target, l, mid = 1);
    }
}