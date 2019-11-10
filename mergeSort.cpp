//
//  mergeSort.cpp
//  Sorting Algorithms
//
//  Created by David Zheng on 11/9/19.
//  Copyright © 2019 David Zheng. All rights reserved.
//

#include "mergeSort.hpp"

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int m = l+(r-l)/2; // same as (l + r) / 2 but avoids overflow

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r){
    int i, j, k;
    int n1 = m - l + 1;
    int n2 =  r - m;

    int L[n1], R[n2];
    
    for(i = 0; i<n1; i++)
        L[i] = arr[l + i];
    for(j = 0; j<n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; // index of first array
    j = 0; // index of second array
    k = l; // index of merged array
    while(i < n1 && j < n2){ // merge temp arrays back into arr
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) // copy remaining of L
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) // copy remaining of R
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
