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

    void MergeSort(int arr[], int first, int last)
    {
        int mid = 0;
        if (first < last)
        {
            mid = (1+last-first)/2;
            // Split the data into two half for the divide and conquer algorithm
            MergeSort(arr, first, mid);
            MergeSort(arr, mid+1, last);

            // Merge them to get sorted output.
            Merge(arr, first, mid, last);
        }
    }

    void Merge(int arr[],int first, int mid, int high) {

        if (arr[mid] <= arr[mid + 1]) {
            return;
        }

        int lSize = mid - first + 1;
        int rSize = (high - mid);

        // creates two arrays with a size for left and right.
        // sizes do not have to be equal, but will be close( +-1)
        int arrL[lSize];
        int arrR[rSize];


        for (int i = 0; i < lSize; i++)
            arrL[i] = arr[i];
        for (int k = 0; k < rSize; k++)
            arrR[k] = arr[mid + k + 1];

        // merge the two halves together.

        int indexL = 0;     // index of left side
        int indexR = 0;     // index of right side
        int indexT = 0;     // index of large array

        // create a loop to add the smallest number of either the left or right side.
        // puts in numbers in increasing order.

        while (indexL < lSize && indexR < rSize) {
            if (arrL[indexL] <= arrR[indexR]) {
                arr[indexT] = arrL[indexL];
                indexL++;
            } else {
                arr[indexT] = arrR[indexR];
                indexR++;
            }
            indexT++;
        }

// two while loops which are constantly putting in the numbers which are now sorted back into the main array.
        while (indexL < lSize) {
            arr[indexT] = arrL[indexL];
            indexT++;
            indexL++;
        }

        // will add any leftover numbers into the array
        while (indexR < rSize) {
            arr[indexT] = arrR[indexR];
            indexT++;
            indexR++;

        }
    }
};


#endif //UNTITLED3_MERGESORT_H
