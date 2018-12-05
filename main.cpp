#include<iostream>
#include<fstream>
#include<string>
#include"MergeSort.h"
#include"QuickSort.h"
#include"Stopwatch.h"




using namespace std;

int main() {

    QuickSort<int> QSort;           // sortingNum = 2 quick sort will be used
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

///////////////////////////////////////////////*
///         This the program used to measure the differences whe running between the two different algorithms
///         The code below will generate integers from 0-10 and numbers from 0-1.
///         There are couts which desplay the time for each.
/// *////////////////////////////////////////////
    int Max = 100;

    // tempI is filled with integers
    int tempI[10000];

    //tempN is filled with numbers between 0-1 (decimal)
    int tempN[10000];
    int tempNum = 0;

    for (int i = 0; i < Max; i++) {
        tempI[i] = rand()%11;
    }
    for(int m = 0; m < Max; m++){

        // will going from 0-100 / 100 to get only decimals or 1 and 0;
        tempNum = rand()%101;
        tempNum = tempNum /100;
        tempN[m] = tempNum;
    }



    MSort.MergeSort(array,array[0], array[numOfItems-1]);


    QSort.QSort(array,array[0], array[numOfItems-1]);

    // for this case the timer will not start until after the array is filled with numbers



    CStopWatch Timer;
    Timer.Reset(); //sets the stopwatch to 0



    return 0;
}