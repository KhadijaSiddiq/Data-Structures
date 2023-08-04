//Going of the charts.
#include <iostream>
using namespace std;

int GoingOfTheCharts(int a[],int size){
  int total_days = 0;

  //normal hours
  int hours = 6;

  //count consecutive days
  int c_days = 0;

  //loop 
  for (int i=0; i<size; i++){
    //check if value at each index is greater then hours then increment 1 in consecutive_days  
    if (a[i] > hours){
      c_days +=1;
    }
    else {
        //check if consecutive days are greater than total days then total days is equal to consecutive days 
        if(c_days > total_days){
            total_days = c_days;
            }
            
        c_days = 0;
    }
  }
  //check if consecutive days are greater than total_days then set total_days value
    if (c_days>total_days){
        total_days = c_days;
    }
    return total_days;
}


int main() {
  int size = 16;
  int a[] = {7,8,9,9,8,6,7,8,8,8,10,12,6,7,7,8}; 

  //call function
  int result = GoingOfTheCharts(a,size);

  //print result
  cout<<result;
  return 0;
}