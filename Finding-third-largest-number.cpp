#include <iostream>

using namespace std;

int findThirdLargest(int numbers[], int size) {
    
    if (size < 3) {
        cout << "Error: Not enough elements." << endl;
        return -1; 
    }

    int largest = -2147483648; 
    int secondLargest = -2147483648; 
    int thirdLargest = -2147483648; 

    
    for (int i = 0; i < size; i++) {
        if (numbers[i] > largest) {
            thirdLargest = secondLargest;
            secondLargest = largest;       
            largest = numbers[i];          
        } else if (numbers[i] > secondLargest && numbers[i] != largest) {
            thirdLargest = secondLargest; 
            secondLargest = numbers[i];    
        } else if (numbers[i] > thirdLargest && numbers[i] != secondLargest && numbers[i] != largest) {
            thirdLargest = numbers[i]; 
        }
    }

    if (thirdLargest == -2147483648) {
        cout << "Error: No third largest number." << endl;
        return -1; 
    }

    return thirdLargest;
}

int main() {
    int numbers[] = {34, 15, 88, 2, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]); 

    int thirdLargest = findThirdLargest(numbers, size);
    if (thirdLargest != -1) {
        cout << "The third largest number is: " << thirdLargest << endl;
    }

    return 0;
}