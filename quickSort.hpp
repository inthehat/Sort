//
//  quickSort.hpp
//  Sorting Algorithms
//
//  Created by David Zheng on 11/9/19.
//  Copyright © 2019 David Zheng. All rights reserved.
//

#ifndef quickSort_hpp
#define quickSort_hpp

#include <stdio.h>

void swap(int* a, int* b);
int partition(int arr[], int low, int high);
void quickSort(int arr[], int low, int high);

#endif /* quickSort_hpp */
