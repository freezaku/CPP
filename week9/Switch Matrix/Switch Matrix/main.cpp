//
//  main.cpp
//  Switch Matrix
//
//  Created by 徐鸿力 on 16/12/17.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int nums[5][5];
    for(int i = 0; i < 5; i ++) {
        for (int j = 0; j < 5; j ++) {
            cin >> nums[i][j];
        }
    }
    int row1, row2;
    cin >> row1 >> row2;
    if(row1 < 0 || row1 >= 5 || row2 < 0 || row2 >= 5) {
        cout << "error" << endl;
    } else {
        for(int i = 0; i < 5; i ++) {
            int temp = nums[row1][i];
            nums[row1][i] = nums[row2][i];
            nums[row2][i] = temp;
        }
        for(int i = 0; i < 5; i ++) {
            for(int j = 0; j < 5; j ++) {
                cout << setw(4) << nums[i][j];
                if(j == 4)  cout << endl;
            }
        }
    }
    return 0;
}
