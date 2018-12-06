#include<iostream>
#include<fstream>
#include<string>
#include"MergeSort.h"
#include"QuickSort.h"
#include"Stopwatch.h"




using namespace std;

int main() {


///////////////////////////////////////////////*
///         This the program used to measure the differences whe running between the two different algorithms
///         The code below will generate integers from 0-10 and numbers from 0-1.
///         There are couts which desplay the time for each.
/// *////////////////////////////////////////////
    int Max = 1000;

    // tempI is filled with integers
    int *tempI = new int[10000000];      // used only for mergesort
    int *tempI1 = new int[10000000];     // used only for quick sort
    //tempN is filled with numbers between 0-1 (decimal)
    int tempN[1000000];
    float tempNum = 0;
    int tempInt = 0;

    time(nullptr);

    for (int i = 0; i < Max; i++) {
        tempInt = rand() % 11;
        tempI[i] = tempInt;
        tempI1[i] = tempInt;
    }


    QuickSort<int> QSortTest;
    MergeS<int> MSortTest;

    CStopWatch Timer;
    Timer.Reset(); //sets the stopwatch to 0

    tempI = MSortTest.MergeSort(tempI,0, Max);
    cout << "the total time to run Mergesort for " << Max << " integers is " << Timer.GetElapsedSeconds() << endl;
    Timer.Reset();

    QSortTest.QSort(tempI1,0, Max);
    cout << "the total time to run Quicksort for " << Max << " integers is " << Timer.GetElapsedSeconds() << endl;


    for(int m = 0; m < Max; m++){

        // will be going from 0-100 / 100, to get only decimals between 1 and 0;
        tempNum = rand()%101;
        tempNum = tempNum /100;
        tempN[m] = tempNum;
    }

/*
    QuickSort<int> QSortTest2;
    MergeS<int> MSortTest2;

    Timer.Reset();

    MSortTest2.MergeSort(tempN,0, Max-1);
    cout << "the total time to run Mergesort for " << Max << " numbers(decimals) is " << Timer.GetElapsedSeconds() << endl;
    Timer.Reset();

    QSortTest2.QSort(tempN,0, Max-1);
    cout << "the total time to run Quicksort for " << Max << " numbers(decimals) is " << Timer.GetElapsedSeconds() << endl;
    Timer.Reset();


*/





    // for this case the timer will not start until after the array is filled with numbers







    return 0;
}