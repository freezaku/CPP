//
//  main.cpp
//  Insert String
//
//  Created by 徐鸿力 on 16/12/20.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;

int main() {
    string str1, str2;
    while (cin >> str1 >> str2) {
        char maxChar = str1[0];
        int maxIndex = 0;
        for(int i = 0; i < str1.size(); i ++) {
            if(str1[i] > maxChar) {
                maxChar = str1[i];
                maxIndex = i;
            }
        }
        string result = str1.substr(0, maxIndex + 1) + str2 + str1.substr(maxIndex + 1, str1.size() - maxIndex - 1);
        cout << result << endl;
    }
    return 0;
}
