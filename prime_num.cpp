#include<iostream>

using  namespace std;

int main(){
  int num,count=0;
  cout<<"enter the number of which you want to find prime or not"<<endl;
  cin>>num;
  for(int i=2;i<num;i++){
      if(num%i==0) {count=1; break; }
  }
  if(count==1) cout<<"Not Prime Number!!"<<endl;
  else cout<<"Prime number!!"<<endl;
}  
