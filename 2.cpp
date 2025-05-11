// Check Whether a Number is Even or Odd in C++
#include<iostream>
using namespace std;
// method 1
// bool isEven(int number){
//     return (!(number &1));
// }
int main(){
    int n;
    cin>>n;
//     if(isEven(n)){
//     cout<<"Even";}

// else{
//     cout<<"odd";

// }
if(n % 2 == 0){
    cout<<"Number is even";
}
else{
    cout<<"NUmber is odd";
}

}