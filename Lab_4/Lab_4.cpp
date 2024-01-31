// Lab_4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void printMenu() {
    cout << "Please Select which operation to perform:" << endl;
    cout << "\t1. Factorial" << endl;
    cout << "\t2. Arithmetic Series" << endl;
    cout << "\t3. Geometric Series" << endl;
    cout << "\t4. Exit" << endl;
    cout << "Your Selection: ";
}

void factorial() {
    int n;
    cout << "Factorial:" << endl;
    cout << "Enter a number: ";
    cin >> n;

    while (n < 0) {
        cout << "Nice try, please enter a POSITIVE number... ";
        cin >> n;
    }

    int result = 1;
    cout << n << "! = ";
    for (int i = 1; i <= n; ++i) {
        result *= i;
        cout << i;
        if (i < n) {
            cout << " * ";
        }
    }
    cout << " = " << result << endl;
}


void arithmetic() {
    int a, d, n, sum = 0;
    cout << "Arithmetic Series:" << endl;
    cout << "Enter a number to start at: ";
    cin >> a;
    cout << "Enter a number to add each time: ";
    cin >> d;
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    for (int i = 0; i < n; ++i) {
        sum += a + i * d;
        cout << (a + i * d);
        if (i < n - 1) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;
}

void geometric() {
    double a, r;
    int n;
    cout << "Geometric Series:" << endl;
    cout << "Enter a number to start at: ";
    cin >> a;
    cout << "Enter a number to multiply by each time: ";
    cin >> r;
    cout << "Enter the number of elements in the series: ";
    cin >> n;

    while (n <= 0) {
        cout << "Please enter a positive integer for the number of elements." << endl;
        cout << "Enter the number of elements in the series: ";
        cin >> n;
    }

    double term = a;
    double sum = 0;
    for (int i = 0; i < n; ++i) {
        if (i > 0) {
            term *= r;
        }
        cout << term;
        sum += term;
        if (i < n - 1) {
            cout << " + ";
        }
    }

    cout << " = " << sum << endl;
}

int main() {
    int choice;
    char again;
    do {
        printMenu();
        cin >> choice;
        if (choice == 1) {
            factorial();
        }
        else if (choice == 2) {
            arithmetic();
        }
        else if (choice == 3) {
            geometric();
        }
        else if (choice == 4) {
            cout << "Exiting program." << endl;
            return 0;
        }
        else {
            cout << "Invalid choice. Please try again." << endl;
        }
        cout << "Go Again? [Y/N] ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
