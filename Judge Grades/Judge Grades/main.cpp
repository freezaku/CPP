//
//  main.cpp
//  Judge Grades
//
//  Created by 徐鸿力 on 16/12/15.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n;
    if(n >= 95 && n <= 100) {
        m = 1;
    } else if(n >= 90 && n <95) {
        m = 2;
    } else if(n >= 85 && n < 90) {
        m = 3;
    } else if(n >= 80 && n < 85) {
        m = 4;
    } else if(n >= 70 && n < 80) {
        m = 5;
    } else if(n >= 60 && n < 70) {
        m = 6;
    } else if(n < 60) {
        m = 7;
    }
    cout << m << endl;
}
