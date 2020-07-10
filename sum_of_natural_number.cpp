#include<iostream>

using namespace std;

int main(){
   int number,sum=0;
   cout<<"enter the number till which you want sum"<<endl;
   cin>>number;
   for(int i=1;i<=number;i++)
     sum=sum+i;
   cout<<"The sum of number till "<<number<<" is "<<sum<<endl;  
   return 0;
}   
