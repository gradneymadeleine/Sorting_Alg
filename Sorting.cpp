#include <iostream>
#include <string>
#include <fstream>
#include <chrono>
#include <ctime>

using namespace std;
using namespace std::chrono;

//Array
void printArray(double myArray[], int n){
  for(int i=0; i<size; ++i){
    cout<< myArray[i] << " ";
  }
  cout<<endl;
}

//bubble sort
void BubbleSort(double myArray[], int n){
  for(int i=0; i<n; ++i){
    int temp = 0;
    for(int j=0; j<n-1; ++j){
      if(myArray[j]>myArray[j+1]){
        double temp = myArray[j+1];
        myArray[j+1]=myArray[j];
        myArray[j]=temp;
      }
    }
  }
}

//selection sort
void SelectionSort(double myArray[], int n){
  for(int i=0; i <n);++i){
    for(int j=i+1;j<n; j++){
      if(myArray[j]<myArray[i]){
        double temp =myArray[j]
        myArray[j+1]= myArray[i];
        myarray[i] = temp;
      }
    }
  }
}

//insertion BubbleSort
void InsertionSort(double myArray[], int n){
  for(int j=1; j<10; ++j){
    double temp = myArr[j];
    int k = j;
    while(j>0 && myArray[j-1] >= temp){
      myArray[j] = myArray[j-1];
      j--;
    }
    myArray[j] = temp;
  }
}

int main(int argc, char **argv){
  string file;
  if(arc != 2){
    cerr << "wrong number arguments. Terminated" <<endl;
    return 0;
  }
  else{
    file = argv[1];
  }
  ifstream in;
  in.open(file);
  if(!in){
    cerr<<"File not found."<<endl;
    return 0;
  }
  string line;
  double *myArray1;
  double *myArray2;
  double *myArray3;
  double *myArray4;
  int i = 0;
  int n;

  if(getLine(in, line)){
    n = stoi(line);
    myArray1 = new double[n];
    myArray2 = new double[n];
    myArray3 = new double[n];
    myArray4 = new double[n];
  }
  while(getLine(in,line)){
    myArray1[i] = stod(line);
    myArray2[i] = stod(line);
    myArray3[i] = stod(line);
    myArray4[i] = stod(line);
    i++
  }
}
