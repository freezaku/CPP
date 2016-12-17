//
//  main.cpp
//  Sum of Two
//
//  Created by 徐鸿力 on 16/12/16.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i = 0; i < n; i ++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i ++) {
        int target = k - a[i];
        for(int j = 0; j < n; j ++) {
            if(i != j && a[j] == target) {
                cout << "yes" << endl;
                return 0;
            }
        }
    }
    cout << "no" << endl;
    return 0;
}
