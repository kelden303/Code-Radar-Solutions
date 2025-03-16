

// Function to find the length of the smallest subarray to be sorted
int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;

    // Find the first element which is out of order from the left
    while (left < n - 1 && arr[left] <= arr[left + 1])
        left++;

    // If array is already sorted
    if (left == n - 1)
        return 0;

    // Find the first element which is out of order from the right
    while (right > 0 && arr[right] >= arr[right - 1])
        right--;

    // Find min and max in the unsorted subarray
    int minVal = arr[left], maxVal = arr[left];
    for (int i = left; i <= right; i++) {
        if (arr[i] < minVal) minVal = arr[i];
        if (arr[i] > maxVal) maxVal = arr[i];
    }

    // Expand the left boundary if needed
    while (left > 0 && arr[left - 1] > minVal)
        left--;

    // Expand the right boundary if needed
    while (right < n - 1 && arr[right + 1] < maxVal)
        right++;

    return right - left + 1;
}

int main() {
    int t;
    scanf("%d", &t);  // Read number of test cases
    while (t--) {
        int n;
        scanf("%d", &n);  // Read array size
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);  // Read array elements
        }
        
        printf("%d\n", findUnsortedSubarray(arr, n));  // Print the result
    }
    return 0;
}