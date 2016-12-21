//
//  main.cpp
//  Simple Caculatore
//
//  Created by 徐鸿力 on 16/12/20.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    char op;
    cin >> num1 >> num2 >> op;
    if(op != '+' && op != '-' && op != '*' && op != '/') {
        cout << "Invalid operator!" << endl;
    } else {
        if(op == '+') {
            cout << num1 + num2 << endl;
        } else if(op == '-') {
            cout << num1 - num2 << endl;
        } else if(op == '*') {
            cout << num1 * num2 << endl;
        } else if (op == '/') {
            if(num2 == 0) {
                cout << "Divided by zero!" << endl;
            } else {
                cout << num1 / num2 << endl;
            }
        }
    }
    return 0;
}
