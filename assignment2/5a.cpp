#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of rows or columns: ";
    cin>>n;
    int D[n];
    cout<<"enter the diagonal elements: ";
    for(int i=0; i<n; i++){
        cin>>D[i];
    }
    cout<<"the diagonal matrix is: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                cout<<" "<<D[i]<<" ";
            } else cout<<" 0 ";
        } cout<<endl;
    }

    return 0;
}