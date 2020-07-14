#include<iostream>

using  namespace std;

int main(){
  int num;
  cout<<"enter the number of which you want to find factorial"<<endl;
  cin>>num;
  cout<<"Factors are: ";
  for(int i=2;i<num;i++){
      if(num%i==0) cout<<i<<" ";
  }
}  
