//Fixing code in production

#include <iostream>
using namespace std;

int FixingCodeInProduction(int a[],int size, int number){
    int low = 0;
    int high = size-1;
    while (low<high){
        
        //find the index of mid value
        int mid = (low +high) / 2;

        //check if the mid value is greater than number.
        if (a[mid]>number){
            high = mid;
        }

        //check if the mid value is less than number
        else if (a[mid] < number){
            low = mid;
        }

        //if mid value is equal to the required value then return index
        else{
            if (a[mid] == number){
                return mid;
            }
        }
    }

    //If the value is not present then return -1
    return -1;
}
int main(){
    int size = 9;
    int a[] = {2, 4, 8, 16, 32, 64, 128, 256, 512};
    int number = 32;

    //call function and store result
    int result = FixingCodeInProduction(a,size,number);

    //if result is -1 print element is not present 
    if (result == -1){
        cout<<"Element is not present";
    }
    //else print the index of the value
    else{
        cout<<"Element is present at index : "<<result;
    }    
}