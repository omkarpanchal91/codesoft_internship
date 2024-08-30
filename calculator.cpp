#include<iostream>
using namespace std;

int main(){
	cout<<"I Have Made the calculater"<<endl;
	cout<<"**********CALCULATOR*********"<<endl;
	int a,b;
	cout<<"Enter the first number"<<endl;
	cin>>a;
	cout<<"Enter the second number"<<endl;
	cin>>b;
	char c;
	cout<<"Enter any operation(+,-,*,/)"<<endl;
	cin>>c;
	switch(c){
		case '+' :
			cout<<"Addition of numbers: ";
			cout<<a+b;
			break;
		case '-' :
			cout<<"Substraction of numbers: ";
			cout<<a-b;
			break;
		case '*' :
			cout<<"Multiplication of numbers: ";
			cout<<a*b;
			break;
		case '/' :
			cout<<"Division of numbers: "; 
			cout<<a/b;
			break;
	}
	return 0;
}
