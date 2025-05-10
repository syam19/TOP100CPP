// Check if a Number is Positive or Negative 
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    // //Method 1
     if(n < 0){
         cout<<"NUmber is Negative";
     }else{
         cout<<"Number is positive";
     }

    //Method 2
    if(n == 0){
        cout<<"Zero "; 
    }
        else (n > 0) ? cout<< " POsitive " :cout<< "Negative";
    
    return 0;
}
