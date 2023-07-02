//
// Created by Origami on 2023/7/2.
//
#include <iostream>
#include <iomanip>

using namespace std;

const int S = 150, A = 15, B = 25;

// 计算梯形面积
int f(int a, int b, int h) {
    return (a + b) * h / 2;
}

int main() {
    // s = w * h / 2
    // h = 2 * s / w
    int h = 2 * S / A;

    // printf("%.2lf", double(f(A, B, h)));
    cout << fixed << setprecision(2) << double(f(A, B, h)) << endl;
    return 0;
}