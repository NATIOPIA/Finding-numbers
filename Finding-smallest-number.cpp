#include <iostream>
using namespace std;

int findSmallestNumber(int numbers[], int size) {
    
    if (size <= 0) {
        throw invalid_argument("The array is empty.");
    }

    int smallest = numbers[0];

    for (int i = 1; i < size; i++) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
    }

    return smallest; 
}

int main() {
    int numbers[] = {34, 15, 88, 2, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    try {
        int smallest = findSmallestNumber(numbers, size);
        cout << "The smallest number in the array is: " << smallest << std::endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }

    return 0;
}