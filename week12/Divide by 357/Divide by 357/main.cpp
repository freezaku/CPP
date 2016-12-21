//
//  main.cpp
//  Divide by 357
//
//  Created by 徐鸿力 on 16/12/20.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    if(N % 105 == 0) {
        cout << "3 5 7" << endl;
    } else if(N % 15 == 0) {
        cout << "3 5" << endl;
    } else if(N % 21 == 0) {
        cout << "3 7" << endl;
    } else if(N % 35 == 0) {
        cout << "5 7" << endl;
    } else if(N % 3 == 0) {
        cout << "3" << endl;
    } else if(N % 5 == 0) {
        cout << "5" << endl;
    } else if(N % 7 == 0) {
        cout << "7" << endl;
    } else {
        cout << "n" << endl;
    }
    return 0;
}
