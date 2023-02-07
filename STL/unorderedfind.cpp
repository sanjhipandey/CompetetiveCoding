#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int arr[10]={1,2,6,20,45,20,3,2,6,45};
    unordered_map<int, int> hp;
    int i =0;
    for(int x: arr){

        hp.insert(i, x);
        i++;
        
    }
    for(unordered_map<int, int>::iterator j:hp){
        cout<<hp.second;


    }
}