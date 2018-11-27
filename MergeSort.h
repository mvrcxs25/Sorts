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


    MergeS(){


}




int Merge(int arr[], int mid, int high){

    int lSize = mid +1;
    int rSize = (high - mid);

    // creates two arrays with a size for left and right.
    // sizes do not have to be equal.
    int arrL[lSize];
    int arrR[rSize];


    for(int i = 0; i < lSize; i++)
        arrL[i] = arr[i];
    for(int k = 0; k < rSize; k++)
        arrR[k] = arr[mid+k+1];

    // merge the two halves together.

    int indexL = 0;     // index of left side
    int indexR = 0;     // index of right side
    int indexT = 0;     // index of large array

    // create a loop to add the smallest number of either the left or right side.
    // puts in numbers in increasing order.

    while(indexL < lSize && indexR < rSize){
        if(arrL[indexL] <= arrR[indexR])
        {
            arr[indexT] = arrL[indexL];
            indexL++;
        }
        else {
            arr[indexT] = arrR[indexR];
            indexR++;
        }
        indexT++;
    }



    MergeSort(int *a, int low, int high)
    {
        int mid;
        if (low < high)
        {
            mid=(low+high)/2;
            // Split the data into two half.
            MergeSort(a, low, mid);
            MergeSort(a, mid+1, high);

            // Merge them to get sorted output.
            Merge(a, low, high, mid);
        }
    }
}

void mergeSort(int arr[], int low, int high){
    int mid;



}


};


#endif //UNTITLED3_MERGESORT_H
