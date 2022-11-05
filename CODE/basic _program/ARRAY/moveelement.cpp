#include<iostream>
using namespace std;
int main(){
     int temp[n];
 
    // Traversal array and store +ve element in
    // temp array
    int j = 0; // index of temp
    for (int i = 0; i < n ; i++)
        if (arr[i] >= 0 )
            temp[j++] = arr[i];
 
    // If array contains all positive or all negative.
    if (j == n || j == 0)
        return;
 
    // Store -ve element in temp array
    for (int i = 0 ; i < n ; i++)
        if (arr[i] < 0)
            temp[j++] = arr[i];
 
    // Copy contents of temp[] to arr[]
    memcpy(arr, temp, sizeof(temp));
}
}

;;


 int arrN[]={0};
        int arrP[]={0};
        
        int count_n=0;
        int count_p=0;
        for(int a=0;a<n;a++){
            if(arr[a]<0){
                count_n++;
                arrN[a]=arr[a];
            }
            if(arr[a]>=0){
                count_p++;
                arrP[a]=arr[a];
            }
            int k=0;
        for(int b=0;b<count_n;b++){
            arr[b]= arrN[b];
            k++;
        }    
        for(int c=0;c<count_p;c++){
            arr[k]= arrP[c];
        }    
        }