//
// Created by Origami on 2023/7/2.
//
#include <iostream>

using namespace std;

void print_triangle(int h, char c) {
    for (int i = 1; i <= h; i++) {
        for (int j = 1; j <= h - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << c;
        }
        cout << endl;
    }
}

int main() {
    char c;
    cin >> c;
    print_triangle(3, c);
    return 0;
}