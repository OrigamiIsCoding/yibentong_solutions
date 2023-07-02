//
// Created by Origami on 2023/7/2.
//
#include <iostream>

using namespace std;

// 设资源的增长速度为 x1，初始资源为 x2，设一个人一年需要 x3 个资源
// x3 * x * a <= x2 + x1 * a
// x3 * y * b <= x2 + x1 * b

// x3 * ( x * a - y * b ) <= x1 * ( a - b )
// x1 / x3 >= ( x * a - y * b ) / ( a - b )

// 求 x1 / x3


int main() {
    int x, a, y, b;
    cin >> x >> a >> y >> b;
    printf("%.2f", double(x * a - y * b) / (a - b));
    return 0;
}