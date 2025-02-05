#include <iostream>
#define SIZE 15

using namespace std;

void getCaracteres(char caracteres[]);
void showCaracteres(char caracteres[]);
void invertCaracteres(char caracteres[]);

int main() {
    char caracteres[SIZE];

    getCaracteres(caracteres);
    invertCaracteres(caracteres);
    showCaracteres(caracteres);

    return 0;
}

void getCaracteres(char caracteres[]) {
    for (int i = 0; i < SIZE; i++) {
        cout << "Enter a character " << i << ": ";
        cin >> caracteres[i];
    }
}

void showCaracteres(char caracteres[]) {
    cout << "========== SHOW CHARACTERS ==========" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << caracteres[i] << endl;
    }
}

void invertCaracteres(char caracteres[]) {
    cout << "========== INVERT CHARACTERS ==========" << endl;
    for (int i = 0; i < SIZE; i++) {
        if(i == 0){
            cout << caracteres[i+1] << endl;
            continue;
        }

        if(i == 1){
            cout << caracteres[i-1] << endl;
            continue;
        }

        cout << caracteres[i] << endl;
    }
}
