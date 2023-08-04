//Bribed queue
#include <iostream>
using namespace std;

int BribedQueue(int a[],int size_of_array){
    int high_no=0;
    int index_highno = 0;

    //loop to find the maximum number and its index
    for (int index=0; index<size_of_array; index++){
        if (high_no<a[index]){
            high_no = a[index];
            index_highno = index;
        }
    }

    //final_value that how many times bribe has taken
    int final_value = (size_of_array-1) - index_highno; 
    return final_value;
}
    // finding the size of array 
int main(){
    int a[] = {1,2,3,4,5,8,6,7};
    int size_of_array = sizeof(a)/4;

    //Function call
    int result = BribedQueue(a,size_of_array);

    //Print result
    cout<<result;
    return 0;

}