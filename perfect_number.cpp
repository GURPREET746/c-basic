#include<iostream>

using  namespace std;

int main(){
  int num,sum=0;
  cout<<"enter the number of which you want to find factorial"<<endl;
  cin>>num;
  for(int i=1;i<=num;i++){
      if(num%i==0) sum += i;
  }
  if(sum==(num*2)) cout<<"Perfect Number!!"<<endl;
  else cout<<"Not a perfect number!!"<<endl;
}  
