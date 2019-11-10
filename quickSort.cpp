//
//  quickSort.cpp
//  Sorting Algorithms
//
//  Created by David Zheng on 11/9/19.
//  Copyright © 2019 David Zheng. All rights reserved.
//

#include "quickSort.hpp"

using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high){
    int pivot = arr[high]; // pivot value
    int i = low - 1; // starting index
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]); // put pivot value in correct place
    return i + 1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
