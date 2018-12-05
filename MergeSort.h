//
// Created by Marcos Ibanez on 11/26/2018.
//

#ifndef UNTITLED3_MERGESORT_H
#define UNTITLED3_MERGESORT_H

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

    void MergeSort(int *arr, int first, int last)
    {
        int mid = 0;
        if (first < last)
        {
            mid = (last+first-1)/2;
            // Split the data into two half for the divide and conquer algorithm
            MergeSort(arr, first, mid);
            MergeSort(arr, mid+1, last);

            // Merge them to get sorted output.
            Merge(arr, first, mid, last);
        }
    }

    void Merge(int *arr, int first, int mid, int last) {
        if(arr[mid] <= arr[mid+1]){
            return;
        }

       int L[10000000];
       int R[10000000];

       for(int j = 0; j < mid ; j++){
           L[j] = arr[j];
       }
       for(int t = last-1; t > mid; t--){
           R[t] = arr[t];
       }

       int left = mid-first+1;
       int right = last-mid;

       int i = last;

       while(left > 0 && right >= 0){
           if(L[left] > R[right]){
               arr[i] = L[left];
               left--;
           }
           else{
               arr[i] = R[right];
               right--;
           }
           i--;
       }

       while(left > 0){
           arr[i] = L[left];
           left--;
           i--;
       }

       while(right > 0){
           arr[i] = R[right];
           right--;
           i--;
       }



    }
};


#endif //UNTITLED3_MERGESORT_H
