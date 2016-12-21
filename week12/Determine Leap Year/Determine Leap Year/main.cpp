//
//  main.cpp
//  Determine Leap Year
//
//  Created by 徐鸿力 on 16/12/20.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a;
    cin >> a;
    if((a % 400 == 0) || (a % 4 == 0 && a % 100 != 0)) {
        if(a % 3200 == 0) {
            cout << "N" <<endl;
        } else {
            cout << "Y" << endl;
        }
    } else {
        cout << "N" << endl;
    }
    return 0;
}
