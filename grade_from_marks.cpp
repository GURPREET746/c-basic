#include<iostream>

using namespace std;

int main(){

 int m1,m2,m3,m4,m5,result;
 cout<<"Enter the marks of student in 5 subject one by one"<<endl;
 cin>>m1>>m2>>m3>>m4>>m5; //marks should be from 0 to 100
 result=(m1+m2+m3+m4+m5)/5;
 if(result > 90) cout<<"AA";
 else if(result>80 && result<=90) cout<<"AB";
 else if(result>70 && result<=80) cout<<" BB";
 else if(result>60 && result<=70) cout<<"BC";
 else if(result>50 && result<=60) cout<<"CC";
 else if(result>=40 && result<=50) cout<<"CD";
 else if(result>0 && result<40) cout<<"FAIL";
 else cout<<"Invalid marks enetered";
 }
