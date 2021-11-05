#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int i,num,*ptr;
    
    ptr=arr;
    cout<<"enter the element to be searched:"<<endl;
    cin>>num;
    for(i=0;i<10;i++)
    {
        if(*ptr==num){
            cout<<num<<"is present in the array"<<endl;
            break;
        }
        else if(i==9)
        cout<<num<<"is not present in array "<<endl;
        ptr++;
    }
    return 0;
    
}