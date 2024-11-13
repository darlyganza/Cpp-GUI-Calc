#include <iostream>
using namespace std;
int addNumbers(int num1, int num2){
	return num1+num2;
}
int divideNumbers(int num1, int num2){
	return num1/num2;
}
int multiplyNumbers(int num1, int num2){
	return num1*num2;
}
int subtractNumbers(int num1, int num2){
	return num1-num2;
}
int main(){
	cout<<"welcome to my calculator\n";
	double sum,product,diff,quot;
	int numA,numB;
	char oper;
	cout<<"Enter a number: ";
	cin>>numA;
	cout<<"Enter another number: ";
	cin>>numB;
	cout<<"Enter the operation: ";
	cin>>oper;
	switch (oper){
		case '+':
			sum=addNumbers(numA, numB);
			cout<<sum;
			break;
		case '-':
			diff=subtractNumbers(numA,numB);
			cout<<diff;
			break;
		case '*':
			product=multiplyNumbers(numA,numB);
			cout<<product;
			break;
		case '/':
			quot=divideNumbers(numA,numB);
			cout<<quot;
			break;
		default:
			cout<<"Please enter valid numbers";
}
	return 0;
}
