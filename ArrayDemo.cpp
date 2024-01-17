/*
 * ArrayDemo
 *
 * Created by Rob Nash
 *
 * Modified by Yang Peng on 01/09/18
 */

#include <iostream>
using namespace std;

//Questions: 
//How are the declarations of the arrays set and set2 different than how they would be declared in Java?
//In terms of syntax, the square brackets go after the name rather than the data type. Another thing to consider is the size is not considered in memory


// Forward declarations.
void display(int data[], int size);
void bubble(int data[], int size);
void swap( int* idx1, int* idx2);

//Additional code
int linearSearch(int data[], int size, int target);


int main(int argc, const char * argv[])
{
  const int SIZE = 7;
  // These are auto variables.
  int set[] = {1,4,3,2,5,9,8}; // Size implicit
  int set2[] = {30, 23, 25, 19, 100, 12, 7};
  // How does it look like in JAVA?
  // int[] myArray = new int[3];
  // int[] myArray = {1, 2, 3};
  // int[] myArray = new int[] {1, 2, 3};
    
  // You have to pass the size in; a C++ array is just a dumb block of
  // storage; no size information is carried with it and no bounds
  // checking is done.
  display(set, SIZE);
  bubble(set, SIZE);
  display(set, SIZE);
 

  cout << "Searching for 2 in set[]: " << linearSearch(set, SIZE, 2) << endl;

    
  return 0;
}


//linearsearch method
int linearSearch(int data[], int size, int target) {
    for(int i = 0; i < size; i++) {
      if(data[i] == target) 
      {
        return i;
      }
    }
    return -1;
}



void display(int data[], int size) {
  for(int i = 0; i < size; i++) {
    cout << data[i] << ",";
  }
  cout << std::endl;
}

void bubble(int data[], int size) {
  for(int i = 0; i < size; i++) {
    for(int k = 0; k < size - 1 - i; k++) {
      if(data[k] < data[k+1]) {
		  swap(&data[k], &data[k + 1]);
      }
    }
  }
}

void swap(int* idx1, int* idx2) {
  int temp = *idx1;
  *idx1 = *idx2;
  *idx2 = temp;
}
 
