//
//  main.cpp
//  Reverse
//
//  Created by 徐鸿力 on 16/12/18.
//  Copyright © 2016年 Honglix Xu. All rights reserved.
//

#include <iostream>

using namespace std;

void reverse(int nums[], int left, int right) {
    while(left < right) {
        int temp = nums[left];
        nums[left] = nums[right];
        nums[right] = temp;
        left ++;
        right --;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    int nums[n];
    for(int i = 0; i < n; i ++) {
        cin >> nums[i];
    }
    m = m % n;
    reverse(nums, 0, n - m - 1);
    reverse(nums, n - m, n - 1);
    reverse(nums, 0, n - 1);
    for(int i = 0; i < n; i ++) {
        cout << nums[i] << " ";
    }
    return 0;
}
