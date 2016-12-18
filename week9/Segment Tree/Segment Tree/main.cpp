//
//  main.cpp
//  Segment Tree
//
//  Created by 徐鸿力 on 16/12/18.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int L, M, total = 0, count = 0, res = 0;
    cin >> L >> M;
    total = L + 1;
    int a[10001];
    for(int i = 0; i < 10001; i ++) {
        a[i] = 1;
    }
    for(int i = 0; i < M; i ++) {
        int start, end;
        cin >> start >> end;
        for(int i = start; i <= end; i ++) {
            a[i] = 0;
        }
    }
    for(int i = 0; i < 10001; i ++) {
        if(a[i] == 0)   count ++;
    }
    res = total - count;
    cout << res << endl;
}
