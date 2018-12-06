//
// Created by Marcos Ibanez on 11/26/2018.
//

#ifndef UNTITLED3_MERGESORT_H
#define UNTITLED3_MERGESORT_H
#include<iostream>
using namespace std;


/*
    Merge sort is a divide and conquer sort. Divides the large array into two smaller
    sub arrays. Each is sorted individually and then merged together. First sub array is
    lowest to mid, then second is mid to highest.

*/
template <class Type>
class MergeS{
private:

public:

    int * MergeSort(int *arr, int first, int last)
    {
        int mid;
        if (first < last)
        {
            mid = (last+first)/2;
            // Split the data into two half for the divide and conquer algorithm
            arr = MergeSort(arr, first, mid);
            arr = MergeSort(arr, mid+1, last);

            // Merge them to get sorted output.
            arr = Merge(arr, first, mid, last);
        }

        return arr;
    }

    int * Merge(int *arr, int first, int mid, int last) {
        if(arr[mid] <= arr[mid+1]){
            return arr;
        }

        int n1 = mid - first + 1;
        int n2 =  last - mid;
        int init = first, l = 0, r = 0;

        int L[n1], R[n2];

        for (int i = 0; i < n1; i++)
            L[i] = arr[first + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1+ j];

        while (r < n2 && l < n1)
        {
            if (L[l] <= R[r])
            {
                arr[init] = L[l];
                l++;
            }
            else
            {
                arr[init] = R[r];
                r++;
            }
            init++;
        }

        while (l < n1)
        {
            arr[init] = L[l];
            l++;
            init++;
        }

        while (r < n2)
        {
            arr[init] = R[r];
            r++;
            init++;
        }

        return arr;
    }
};


#endif //UNTITLED3_MERGESORT_H
