//
//  main.cpp
//  Compare String
//
//  Created by 徐鸿力 on 16/12/17.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <fstream>

using namespace std;

int main() {
    char s1[80] = {'a'};
    char s2[80] = {'a'};
    cin.getline(s1, 80);
    cin.getline(s2, 80);
    int i = 0;
    for(i = 0; i < 80; i ++) {
        char ch1 = s1[i];
        char ch2 = s2[i];
        if(ch1 >= 97)   ch1 = ch1 - 32;
        if(ch2 >= 97)   ch2 = ch2 - 32;
        if(ch1 == ch2) {
            continue;
        } else if(ch1 > ch2) {
            cout << ">" << endl;
            break;
        } else {
            cout << "<" << endl;
            break;
        }
    }
    if(i == 80) cout << "=" << endl;
    return 0;
}
