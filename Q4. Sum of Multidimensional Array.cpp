#include <iostream>
using namespace std;

int main() {


  int r, c, a1[50][50], a2[50][50], sum[50][50], i, j;
  cout<<"Enter the number of rows (between 1 and 50): ";
  cin>>r;
  cout<<"Enter the number of columns (between 1 and 50): ";
  cin>>c;

  cout<<"Enter Elements for first matrix"<<endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
        cout << "Enter a1["<<i+1<<"]["<<j+1<<"] : ";
        cin>>a1[i][j];
    }

  cout<<"\n\nEnter Elements for Second matrix"<<endl;
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
        cout << "Enter a2["<<i+1<<"]["<<j+1<<"] : ";
        cin>>a2[i][j];
    }

  for (i = 0; i < r; i++){
    for (j = 0; j < c; j++) {
      sum[i][j] = a1[i][j] + a2[i][j];
    }
  }


  cout<<"\nSum of Two Matrices\n"<<endl;
  for (i = 0; i < r; i++){
    for (j = 0; j < c; j++) {
      cout<<"\t"<<sum[i][j];
      if (j == c - 1) {
        cout<<"\n\n";
      }
     }
  }

  return 0;
}
