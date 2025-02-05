#include <iostream>
#define SIZE 10

using namespace std;

void getNumbers(int numbers[]);
void showNumbers(int numbers[]);
void showInvertedNumbers(int numbers[]);
void invertNumbers(int numbers[]);

int main() {
    int numbers[SIZE];

    getNumbers(numbers);
    showNumbers(numbers);
    showInvertedNumbers(numbers);
    invertNumbers(numbers);

    return 0;
}

void getNumbers(int numbers[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter a number " << i << ": ";
        cin >> numbers[i];
    }
}

void showNumbers(int numbers[]) {
    cout << "========== SHOW NUMBERS ==========" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << numbers[i] << endl;
    }
}

void showInvertedNumbers(int numbers[]) {
    cout << "========== SHOW INVERTED NUMBERS ==========" << endl;
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << numbers[i] << endl;
    }
}

void invertNumbers(int numbers[]) {
    cout << "========== INVERT NUMBERS ==========" << endl;
    for (int i = 0; i < SIZE; i++) {
        if(i == 0){
            int aux = numbers[i];

            if(aux > numbers[i+1]){
                numbers[i] = numbers[i+1];
                numbers[i+1] = aux;
            }

        }

        cout << numbers[i] << endl;
    }
}
