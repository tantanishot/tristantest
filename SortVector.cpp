#include <iostream>
#include <vector>

using namespace std;

//lets do a insertion for this one
template <typename T>
void SortVector(vector<T>& my_vector) {
    for(int i = 1; i < my_vector.size(); i++) {
        T temp = my_vector[i];
        int j = i - 1;
            while(j > 0 && my_vector[j] > temp) 
            {
            my_vector[j + 1] = my_vector[j];
            j--; 
            }
            my_vector[j + 1] = temp;
    }
}


int main() {
   vector<int> intVector = {1,78,5,3,56,8,5,34};
    for(int i = 0; i < intVector.size(); i++) {
        cout << intVector[i] << " ";
    }
    cout << endl;
    SortVector(intVector);
        for(int i = 0; i < intVector.size(); i++) {
        cout << intVector[i] << " ";
    }



}