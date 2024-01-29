#include <iostream>
using namespace std;
#include <vector>

void BubbleSort(int sortArray[], int arraySize) {
    for(int i = 0; i < arraySize; i++) {
        for(int j = 0; j < arraySize - 1; j++) {
            if(sortArray[j] > sortArray[j + 1]) 
            {
            int temp = sortArray[j];
            sortArray[j] = sortArray[j + 1];
            sortArray[j + 1] = temp;
            }
        }   
    }
}


void InsertionSort(int sortArray[], int arraySize) {
    for(int i = 1; i < arraySize; i++) {
        int temp = sortArray[i];
        int j = i - 1;
        while(j > 0 && sortArray[j] > temp) 
        {
            sortArray[j + 1] = sortArray[j];
            j--;
        }   
        sortArray[j + 1] = temp;
    }   
}


template<typename T>
T BubbleSortHalf(vector<T> vector) {
    for(int i = 0; i < vector.size(); i++) {
        for(int j = 0; j < vector.size() - 1; j++) {
            if(vector[j] > vector[j + 1]) 
            {
                T temp = vector[j];
                vector[j] = vector[j + 1];
                vector[j + 1] = temp;
            }
        }
    }
    return vector[vector.size()  / 2];
}


int main() {
cout << "Bubble Sort: "  << endl;
int bubbleArray[] = {2,7,4,1,5,3};
for(int i  = 0; i < 6; i++) {
    cout << bubbleArray[i];
}
cout << endl;
BubbleSort(bubbleArray, 6);
for(int i  = 0; i < 6; i++) {
    cout << bubbleArray[i];
}
cout << endl;
cout << "Insertion Sort: "  << endl;
int insertionArray[6] = {5,25,15,30,20,10};
for(int i  = 0; i < 6; i++) {
    cout << insertionArray[i] << " ";
}
cout << endl;
InsertionSort(insertionArray,6);
for(int i  = 0; i < 6; i++) {
    cout << insertionArray[i] << " ";
}
cout << endl;

vector<int> vec1 = {1,6,4,23,8,5,3,33};

vector<char> vec2 = {'c', 'b', 'a', 'd', 'c', 'f'};

cout << BubbleSortHalf(vec1) << endl;
cout << BubbleSortHalf(vec2) << endl;








}