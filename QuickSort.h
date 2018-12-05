//
// Created by Marcos Ibanez on 11/26/2018.
//

#ifndef UNTITLED3_QUICKSORT_H
#define UNTITLED3_QUICKSORT_H


using namespace std;


/*
    Quick sort is very similar to merge sort the main difference is that quick sort
    has a pivot point somewhere in the middle of the array

*/
template <class Type>
class QuickSort {
private:


public:
    void QSort(int arr[], int first, int last) {
        if (first < last) {
            int Part = Partition(arr, first, last);

            QSort(arr, first, Part - 1);
            QSort(arr, Part + 1, last);
        }

    }

    int Partition(int arr[], int first, int last) {

    // pivot point p in the middle

        int p = arr[last/2];

        swap(&arr[p], &arr[first]);
        //places pivot at first position
        int pivot = arr[first];
        int left = first;

        for( int i = first+1; i < last; i++){

            if ( arr[i] < pivot){
                left = left +1;
                swap(&arr[i], &arr[left]);
            }
        }
        swap(&arr[first],&arr[left]);
        return left;
    }

    void swap(int* arrayA, int* arrayB){
        int* temp = arrayA;
        arrayA = arrayB;
        arrayB = temp;
    }

};



























#endif //UNTITLED3_QUICKSORT_H
