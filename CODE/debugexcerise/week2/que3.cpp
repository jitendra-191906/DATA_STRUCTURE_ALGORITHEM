#include<iostream>

using namespace std;

   //   Left Triangle star Pattern
   //errorful code

// int main() {
//   // size of the triangle
//   int size = N;
//   // loop to print the pattern
//   for (int i = 0; i < size; i++) {
//     // print column
//     for (int j = 0; j < i; j++) {
//       cout << "**";
//     }
//     cout << "\n";
//   }
//   return 0;
// }

//errorfree code
int main() {
  // size of the triangle
  int size = 5;
  // loop to print the pattern
  for (int i = 0; i < size; i++) {
    // print column
    for (int j = 0; j < i+1; j++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
     
