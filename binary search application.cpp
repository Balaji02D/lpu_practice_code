#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// bool isPresent(int*arr,int n,int t){
//     int in = 0;
//     for(int i = 0;i<n-1;i++){
//         if(arr[i] > arr[i+1]){
//             in = i ;
//             break;
//         }
//     }
    
//     return (binary_search(arr,arr+in,t) || binary_search(arr+in+1,arr+n,t));
// }

bool isPresent(int*arr,int n,int t){
    int i = 0;
    int j = n-1;
    while(i <=j){
        int mid = (i+j)/2;
         if(arr[mid] == t)return true;
         else if(arr[mid] > arr[i]){ //left sorted
             if(t < arr[mid] && t>=arr[i]){
                 j = mid-1;
             }else{ 
                 i = mid+1;
             }
         }else{// right sorted
             if(arr[mid] < t && t <= arr[j]){
                 i = mid+1;
             }else{
                 j = mid-1;
             }
         }
    }
    return false;
}


int main() {
// 	cout<<"GfG!";
int arr[] = {2,5,6,0,0,1,2};

int t = 0;
cout<<isPresent(arr,7,t);
	return 0;
}
