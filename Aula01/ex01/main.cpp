#include <iostream>
#define SIZE 5

using namespace std;

void getNumbers(int numbers[]);
void showNumbers(int numbers[]);
void showInvertedNumbers(int numbers[]);
void invertNumbers(int numbers[]);
void bubbleSort(int numbers[]);

int main() {
    int numbers[SIZE];

    getNumbers(numbers);
    bubbleSort(numbers);
    showNumbers(numbers);
    //showInvertedNumbers(numbers);
    //invertNumbers(numbers);

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

/*
    Essa função é um exemplo de como implementar o algoritmo de ordenação Bubble Sort.
    O Bubble Sort é um algoritmo de ordenação simples que percorre o vetor diversas vezes
    e a cada iteração compara os elementos adjacentes e os troca de posição caso necessário.
    O algoritmo é finalizado quando nenhuma troca é realizada em uma iteração.
*/
void bubbleSort(int numbers[]){
    for(int j=1; j < SIZE; j++){
        bool hasToChange = false;
        for(int i=0; i < (SIZE - j); i++){
            if(numbers[i] > numbers[i+1]){
                /*
                    int aux = numbers[i];
                    numbers[i] = numbers[i+1];
                    numbers[i+1] = aux;

                    O trecho acima é equivalente ao trecho abaixo.
                */
                swap(numbers[i], numbers[i+1]);
                hasToChange = true;
            }
        }
        if(!hasToChange){
            break;
        }
    }
}
