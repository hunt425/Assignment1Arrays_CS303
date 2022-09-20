//Hunter Tysdal
//09/19/2022

using namespace std;
#include <iostream>
#include <fstream>
#include "arrayFunct.h"


int main() {
  ArrayClass arrFun; //setting class name for faster to type variable name
  ifstream fin("integers.txt");
  int newInt;
  int arr1[11]; //array that we will be using
  //because arrays can't have size changed, made array an extra integer longer for future function

  while (fin.good()){ //reads in txt file until at the end
    
    for (int i=0; i<10; i++){
      fin >> newInt;
      arr1[i] = newInt;
    }
  }

  arrFun.readArray(arr1); //reads in array from txt file
  //main use is to check work for bugs

  
  int numWanted; //variable for desired number to look for in array for the function
  cout << "What number do you want to look for?" << endl;
  cin >> numWanted;
   arrFun.whereInt(arr1, numWanted);


  int index, userNum; //variables for modifying function
  cout << "What index do you want to change? " << endl;
  cin >> index;
  cout << "What would you like the new number to be?" << endl;
  cin >> userNum;
  arrFun.modifyArr(arr1, index, userNum);

  
  int userAdd; //variable for number that is being added to array via add number function
  cout << "What number do you want to add to the array?" << endl;
  cin >> userAdd;
  arrFun.addNum(arr1, userAdd);


  int newIndex; //variable for index position to remove from array
  cout << "Which index position do you want to remove? " << endl;
  cin >> newIndex;
  arrFun.removeNum(arr1, newIndex);
}