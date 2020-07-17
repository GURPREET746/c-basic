#include<iostream>
using namespace std;

int main(){
   int num,digit;
   cout<<"Enter the number"<<endl;
   cin>>num;
   where(num!=0){
       digit=num%10;
       cout<<"The digit is: "<<digit<<endl;
       num=num/10;
  }
} 
