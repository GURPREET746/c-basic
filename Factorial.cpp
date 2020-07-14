#include<iostream>

using  namespace std;

int main(){
  int num,fact=1;
  cout<<"enter the number of which you want to find factorial"<<endl;
  cin>>num;
  for(int i=1;i<=num;i++){
      fact *= i;
  }
  cout<<"Factorial is: "<<fact<<endl;
}  
