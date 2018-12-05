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
 * */

#endif //UNTITLED3_SAFE_H
