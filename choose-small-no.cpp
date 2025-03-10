#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int findSecondLargest(const vector<int>& arr) {
    int first = numeric_limits<int>::min();
    int second = numeric_limits<int>::min();

    for (int number : arr) {
        if (number > first) {
            second = first;
            first = number;
        } else if (number > second && number != first) {
            second = number;
        }
    }

    return (second == std::numeric_limits<int>::min()) ? -1 : second; 
}

int findThirdLargest(const vector<int>& arr) {
    int first = numeric_limits<int>::min();
    int second = numeric_limits<int>::min();
    int third = numeric_limits<int>::min();

    for (int number : arr) {
        if (number > first) {
            third = second;
            second = first;
            first = number;
        } else if (number > second && number != first) {
            third = second;
            second = number;
        } else if (number > third && number != first && number != second) {
            third = number;
        }
    }

    return (third == numeric_limits<int>::min()) ? -1 : third; 
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> numbers;
    cout << "Enter " << n << " numbers:" << std::endl;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        numbers.push_back(num); 
    }

    int choice;
    cout << "Enter 1 to find the second largest number or 2 to find the third largest number: ";
    cin >> choice;

    if (choice == 1) {
        int secondLargest = findSecondLargest(numbers);
        cout << "The second largest number is: " << (secondLargest == -1 ? "Not available" : std::to_string(secondLargest)) << endl;
    } else if (choice == 2) {
        int thirdLargest = findThirdLargest(numbers);
        cout << "The third largest number is: " << (thirdLargest == -1 ? "Not available" : to_string(thirdLargest)) << std::endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}