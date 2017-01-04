//
//  main.cpp
//  Four Lakes
//
//  Created by 徐鸿力 on 17/1/3.
//  Copyright © 2017年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    for(int a = 1; a <= 4; a ++) {
        for(int b = 1; b <= 4; b ++) {
            if(a == b)  continue;
            for(int c = 1; c <= 4; c ++) {
                if(a == c || b == c)    continue;
                for(int d = 1; d <= 4; d ++) {
                    if(a == d || b == d || c == d)  continue;
                    int O = bool(b == 1) + bool(d == 4) + bool(a == 3);
                    int P = bool(d == 1) + bool(b == 4) + bool(a == 2) + bool(c == 3);
                    int Q = bool(d == 4) + bool(b == 3);
                    int R = bool(a == 1) + bool(c == 4) + bool(d == 2) + bool(b == 3);
                    if(O == 1 && P == 1 && Q == 1 && R == 1) {
                        cout << a << endl;
                        cout << b << endl;
                        cout << c << endl;
                        cout << d << endl;
                    }
                }
            }
        }
    }
    return 1;
    
}
