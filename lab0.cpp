//Name: Bean Nguyen
//Program 0 – Numbers
//This program accepts 4 numbers from the user, then calculates and displays
//the largest, smallest, average, and sorted (ascending/descending) values.
//It loops until the user chooses to stop.

#include <iostream>
#include <algorithm> // for sort
using namespace std;

int main() {
    char choice;

    do {
        int numbers[4];
        int largest, smallest;
        float average = 0;

        // Prompting the user
        cout << "Enter 4 numbers:" << endl;
        for (int i = 0; i < 4; ++i) {
            cout << "Number " << i + 1 << ": ";
            cin >> numbers[i];
            average += numbers[i];
        }

        // Compute average
        average /= 4;

        // Determine smallest and largest
        largest = *max_element(numbers, numbers + 4);
        smallest = *min_element(numbers, numbers + 4);

        // Output results
        cout << "Largest number: " << largest << endl;
        cout << "Smallest number: " << smallest << endl;
        cout << "Average: " << average << endl;

        // Print in increasing order
        sort(numbers, numbers + 4);
        cout << "Numbers in increasing order: ";
        for (int i = 0; i < 4; ++i) {
            cout << numbers[i] << " ";
        }
        cout << endl;

        // Print in decreasing order
        cout << "Numbers in decreasing order: ";
        for (int i = 3; i >= 0; --i) {
            cout << numbers[i] << " ";
        }
        cout << endl;

        // Ask if user wants to run again
        cout << "Do you want to enter another set of numbers? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you." << endl;
    return 0;
}