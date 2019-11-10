//
//  insertionSort.cpp
//  Sorting Algorithms
//
//  Created by David Zheng on 11/9/19.
//  Copyright © 2019 David Zheng. All rights reserved.
//

#include "insertionSort.hpp"

void insertionSort(int arr[], int n){
    int i, cur, j;
    for(i=1; i<n; i++){
        cur = arr[i];
        j = i - 1;
        while(j >= 0 && arr[j] > cur){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = cur;
    }
}
