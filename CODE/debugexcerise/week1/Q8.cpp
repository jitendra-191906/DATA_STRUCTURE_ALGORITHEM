#include <iostream>
using namespace std;
// errorfull code
// Print hollow full pyramid pattern.
// void main(){
//     int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n*2-1; ++j) {
// 		        int k=0;
//             if(j<n-i-1){
//                 cout<<" ";
//             }
//             else if(k < 2*i+1){
//                 if(k==0 || k == 2*i - 1 || i == n - 1){
//                     cout<<"*";
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//             else{
//                 cout<<" ";
//             } k++;
//         }
//         cout<<endl;
//     }
// }
// answer ->
int main(){
    int n;
    cin>>n;
    for (int i=0; i<n; ++i) {
        int k=0;
        for (int j=0; j<2*n-1; ++j) {
            if(j<n-i-1){
                cout<<" ";
            }
            else if(k < 2*i+1){
                if(k==0 || k == 2*i || i == n - 1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
                k++;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}