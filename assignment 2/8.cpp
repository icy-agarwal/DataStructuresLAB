#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements in array: ";
    cin>>n;
    int arr[n];
    cout<<"enter elemets in the array: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int count = 0;
    cout<<"finding distinct elements in the array: "<<endl;
    for(int i=0; i<n; i++){
        int j;
        for(j=0; j<i; j++){
            if(arr[i]==arr[j]){
                break;
            }
        } 
        if(j==i){
            count++;
        }
    }

    cout<<count;
    return 0;
}