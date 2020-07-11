#include<iostream>
using namespace std;

int main(){
 int basic,allowence,deduction,net_salary;
 cout<<"Enter the basic salary"<<endl;
 cin>>basic;
 cout<<"Enter the percentage of allowence"<<endl;
 cin>>allowence;
 cout<<"Enter the percentage of deduction"<<endl;
 cin>>deduction;
 net_salary = basic + basic*allowence/100 - basic*deduction/100;
 cout<<"Total salary recived is: "<<net_salary<<endl;
} 
