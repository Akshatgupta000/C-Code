#include<iostream>
using namespace std;

int main(){
    int array[]={1,2,3,4,5};

    int min=array[0];

    for(int i=0;i<5;i++){
        if(array[i]<min){
            min=array[i];
        }
    }
    cout<<min<<endl;
    return 0;
}