#include <iostream>
#include <vector>
using namespace std;

int maxOperations(int n,int arr[]) {
    int operations = 0;
    bool allEven = true;

    while (true) {
        // Check if all elements are even
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 != 0) {
                allEven = false;
                break; // if there is odd , it will break for loop
            }
        }

        if (!allEven) break; // to break while loop

        // Divide all elements by 2 and increment operation counter
        for (int i = 0; i < n; i++) {
            arr[i] /= 2;
        }
        operations++;
    }
    return operations;
}

int main() {
    int N;
    cin >> N;
    int arr[N];

    // Input the array
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    // Calculate the maximum number of operations
    int result = maxOperations(N,arr);
    cout << result << endl;

    return 0;
}
