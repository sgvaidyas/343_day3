#include <iostream>

using namespace std;

int main() {

  int ** a;
  int row, col, i, j;

  cout << " Rows:" << endl;
  cin >> row;
  

  //Allocating the row
  a = new int * [row];


  //Giving inputs to the array
  //cout << "Enter " << (row * col) << " numbers to the Array\n";
  for (i = 0; i < row; i++) {
  	cout << " Columns:" << endl;
  	cin >> col;
    a[i] = new int[col];
  	cout<<"\n col = "<<col<<endl;
    for (j = 0; j < col; j++) {
      cout << "Enter the elements at Row " << i + 1 << " Column " << j + 1 << endl;
      cin >> a[i][j];
    }
  }

  //Display the array
  cout << "Here is your 2D Array:" << endl;
  for (i = 0; i < row; i++) {
  	col=sizeof(a[i])/sizeof(int);
    for (j = 0; j < col; j++) {
      cout << a[i][j] << ' ';
    }
    cout << endl;
  }

 // User enters the numbers
    for (int i = 0; i < row; i++) {
  
        int* p = (int *)(&a[i] + 1);
        int 
        
  		cout<<&a[i] <<" : "<<p<<endl;
    }

  //Free the memory after the use of array
  for (i = 0; i < row; i++) {
    delete[] a[i];
  }

  delete[] a;

  return 0;
}
