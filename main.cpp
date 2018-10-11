#include <iostream>
#include <deque>

using namespace std;

void menu();

//Os métodos TAD necessários para realizar o exercicio 1
void insertNumberInStack(int number);
void removeNumberInStack();
bool isEmptyInStack();

//Auxiliar Method para comprir o objetivo da aplicação.
int enterNumber();
void printNumbers();


//Deque simula estrutura de dados tanto da pilha quanto na fila.
deque<int> numbers;

int main() {
    menu();
    return 0;
}

void menu() {

    int choice = -999999;

    cout << "--------------------" << endl;
    cout << "Main Menu - LIFO" << endl;
    cout << "--------------------" << endl << endl;


    cout << "[1] Insert a number in the Stack\n";
    cout << "[2] Remove a number in the Stack\n";
    cout << "[3] The stack list is Empty\n";
    cout << "[0] FINISH PROGRAM\n";



    cout << "Enter a valid option" << endl;
    cin >> choice;

    switch (choice) {

        case 0:
            return;

        case 1:
            insertNumberInStack(enterNumber());
            printNumbers();
            break;

        case 2:
            removeNumberInStack();
            printNumbers();
            break;

        case 3:
            if (isEmptyInStack()) {
                cout << "Your Array List is Empty" << endl << endl;
            } else {
                cout << "Array list is not empty" << endl << endl;
            }
            break;

        default:
            cout << "Invalid Option. Try again." << endl << endl;

    }

    menu();


}

int enterNumber() {
    int number;
    cout << "Enter a valid number" << endl;
    cin >> number;
    return number;
}

void insertNumberInStack(int number) {
    numbers.push_front(number);
}

void removeNumberInStack() {

    if (numbers.empty()) {
        cout << "Your list is empty" << endl;
        return;
    }

    int number = numbers.front();
    numbers.pop_front();
    cout << "Number " << number << " is removed" << endl << endl;

}

bool isEmptyInStack() {
    return numbers.empty();
}

void printNumbers() {

    if (numbers.empty()) {
        cout << "Your list is empty" << endl;
        return;
    }

    cout << "[ ";
    for (deque<int>::iterator it = numbers.begin(); it != numbers.end(); ++it) {
        cout << " " << *it;
    }
    cout << " ]" << endl << endl;

    cout << endl << endl;
}