//
//  main.cpp
//  Number of Letter
//
//  Created by 徐鸿力 on 16/12/17.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char s[80];
    cin.getline(s, 80);
    int count[5] = {0};
    for(int i = 0; i < 80; i ++) {
        switch(s[i]) {
            case 'a': count[0] ++; break;
            case 'e': count[1] ++; break;
            case 'i': count[2] ++; break;
            case 'o': count[3] ++; break;
            case 'u': count[4] ++; break;
            default: continue;
        }
    }
    for(int i = 0; i < 4; i ++) {
        cout << count[i] << " ";
    }
    cout << count[4] << endl;
    return 0;
}
