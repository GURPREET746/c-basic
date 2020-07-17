#include<iostream>
using namespace std;

int main(){
   int num,reverse=0,digit;
   cout<<"Enter the number"<<endl;
   cin>>num;
   while(num!=0){
       digit=num%10;
       reverse=reverse*10+digit;
       num=num/10;
  }
  cout<<"The reverse of number is: "<<reverse<<endl;
} 
