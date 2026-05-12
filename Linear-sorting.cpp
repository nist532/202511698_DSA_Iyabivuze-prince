#include<iostream>
using namespace std;
int main(){
	
 long keyNumber=790113332;	
 int phoneNumber[3];
 int i=0;
 do{
 	cout<<"ENTER YOUR PHONE NUMBER:"<<endl;
 	cin>>phoneNumber[i];
 	i=i+1;
 	
 }
 
 while(i<3);
 
 
 for(int i=0; i<3; i++){
 
 	if(phoneNumber[i]==keyNumber){
 		
 		cout<<"YOU HAVE ENTERED A VALID PHONE NUMBER"<<endl;
 		
 		break;
	 }
 }
	
	return 0;
}
