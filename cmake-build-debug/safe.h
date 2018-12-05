//
// Created by Marcos Ibanez on 12/5/2018.
//

#ifndef UNTITLED3_SAFE_H
#define UNTITLED3_SAFE_H


/*
 *
 *
 *
 *  QuickSort<int> QSort;           // sortingNum = 2 quick sort will be used
    MergeS<int> MSort;              // sortingNum = 1 merge sort will be used

    int SortingNum = 0;
    int numOfItems = 0;

    // reading file

    ifstream myfile;
    myfile.open("numbers.txt");

    // Get the type of queue
    myfile >> SortingNum;
    cout << SortingNum << endl;

    // Read in number of items from myfile
    myfile >> numOfItems;
    cout << numOfItems << endl;

    // num is the file being read into the array
    int num =0;

    // array has a very large size in order to account for any type/amount being inserted.
    int array[10000];
    for (int j = 0; j < numOfItems ; ++j) {

        // Read in next line from the txt file
        myfile >> num;
        array[j] = num;
    }
    myfile.close();

    if(SortingNum == 1){
        MSort.MergeSort(array,array[0], array[numOfItems-1]);
    }
    else{
        QSort.QSort(array,array[0], array[numOfItems-1]);
    }
 *
 *
 *
 *
 *
 *
 *
 *
 *   int indexL = 0;     // index of left side
        int indexR = 0;     // index of right side
        int indexT = 1;     // index of large array

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
 *
 *
 * */

#endif //UNTITLED3_SAFE_H
