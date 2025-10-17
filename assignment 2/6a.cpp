#include <iostream>
using namespace std;
int main(){
    int triplet[100][3];
    int row, col, val;
    cout<<"enter number of rows, col, and non zero values: ";
    cin>>row>>col>>val;
    cout<<"enter the elements: ";

    for(int i=1; i<20; i++){
        for(int j = 0; j<3; j++){
            cin>>triplet[i][j];
        }
    }
    int r = 1, c = 1;
    cout<<"taking transpose: ";
    for(int k= 1; k<20; k++){
        int temp[];
        temp = triplet[r][c];
        triplet[r][c] = triplet[c][r];
        triplet[c][r] = temp;
    }
}