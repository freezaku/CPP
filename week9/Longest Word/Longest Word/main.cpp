//
//  main.cpp
//  Longest Word
//
//  Created by 徐鸿力 on 16/12/17.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    char s[500];
    cin.getline(s, 500);
    int i = 0;
    int maxLen = 0;
    int start = 0;
    while(s[i] != '.') {
        int temp = i;
        int len = 0;
        while(s[i] != '.' && s[i] != ' ') {
            i ++;
            len ++;
        }
        if(len > maxLen) {
            start = temp;
            maxLen = len;
        }
        if(s[i] == ' ') {
            i ++;
        } else if(s[i] == '.') {
            break;
        }
    }
    char res[maxLen];
    for(int i = 0; i < maxLen; i ++) {
        res[i] = s[i + start];
        cout << res[i];
    }
    return 0;
}
