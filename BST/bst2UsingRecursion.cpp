#include <iostream>
#include <vector>

using namespace std;

// Passed vector by const reference to prevent copying, and changed dig to float
void bst_search(const vector<float>& arr, int low, int high, float dig) 
{   
    // 1. Base case: if low exceeds high, the element isn't in the array
    if (low > high) {
        cout << "not found\n";
        return;
    }

    // 2. Calculate mid (using this formula prevents integer overflow)
    int mid = low + (high - low) / 2;

    // 3. Base case: target found
    if (dig == arr[mid]) {
        cout << "found\n";
        return;
    } 
    // 4. Recursive step: search left half
    else if (dig < arr[mid]) {
        bst_search(arr, low, mid - 1, dig);
    } 
    // 5. Recursive step: search right half
    else {
        bst_search(arr, mid + 1, high, dig);
    }
}

int main()
{
    // Added 'f' suffix to decimals so they evaluate as floats, not doubles
    vector<float> a = {1, 3, 3.1, 3.2, 3.3, 9, 10, 12};
    
    // Changed 100 to 100.0f to match the float parameter
    bst_search(a, 0, a.size() - 1, 100);
    
    return 0;
}