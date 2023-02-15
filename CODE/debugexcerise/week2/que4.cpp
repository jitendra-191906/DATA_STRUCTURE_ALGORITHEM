#include<iostream>

using namespace std;
//Reverse Pyramid star pattern.
// int main() {
//   // size of the pyramid
//   int size; cin>>size;
//   for (int i = 0; i < size; i++) {
//     // print spaces
//     for (int j = 0; j < i; j++) {
//       cout << "  ";
//     }
//     // print stars
//     for (k = 0; k < 2 * size - 1; k++) {
//       cout << "*";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

//errorfree code


int main() {
  // size of the pyramid
  int size; 
  cin>>size;
  for (int i = 0; i < size; i++) {
    // print spaces
    for (int j = 0; j < i; j++) {
      cout << "  ";
    }
    // print stars

    for (int k = 0; k < 2 * size - 2*i-1; k++) {
      cout << "* ";
    }
    cout << "\n";
  }
  return 0;
} 
