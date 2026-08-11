#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter the number of rows: ";
    cin >> rows;

    // Outer loop to handle the number of rows
    for (int i = rows; i >= 1; --i) {
        
        // Inner loop to print spaces before the stars
        for (int space = 0; space < rows - i; ++space) {
            cout << " ";
        }

        // Inner loop to print the stars
        for (int j = 1; j <= (2 * i - 1); ++j) {
            cout << "*";
        }

        // Move to the next line after each row is printed
        cout << endl;
    }

    return 0;
}