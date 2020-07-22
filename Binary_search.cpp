// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[100],n,key;
    cout<<"Enter the number of element in array"<<endl;
    cin>>n;
    cout<<"Enter the element in sorted manner"<<endl;
    for(int i=0;i<n;i++)
          cin>>arr[i];
    cout<<"Enter the element which you want to search"<<endl;
    cin>>key;
    int l=0,h=n-1,mid=0,pos=0;
    while(l<=h){
         mid=(l+h)/2;
         if(arr[mid]==key) {cout<<"Successfull found at: "<<pos; pos=0; break;}
         if(arr[mid]>key) h=mid-1;
         else l=mid+1;
         pos += 1;
    }
    if(!pos==0) cout<<"No such key";
}
