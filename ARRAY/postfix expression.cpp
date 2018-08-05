#include <iostream>
#include<stack>
#include<string.h>
#include<math.h>
using namespace std;
int main(){
	int i=0;
	int n1,n2,n3;
	stack <int> s1;
	string expression;
	cin>>expression;
	while(expression[i]!='\0'){
		if('0'<expression[i] && expression[i]<'9'){
			s1.push(int(expression[i]));
		}
		else{
			n1=s1.top()-48;
			s1.pop();
			n2=s1.top()-48;
			s1.pop();
			switch(expression[i]){
				case '+':
					n3=n1+n2;
					break;
				case '-':
					n3=n1-n2;
					break;
				case '/':
					n3=n1/n2;
					break;
				case '*':
					n3=n1*n2;
					break;
				case '^':
					n3=pow(n1,n2);
					break;
				default:
					cout<<"please type correct expression";
					return 0;
			}
			s1.push(n3+48);
			
					
		}
		i++;
	}
	n3=s1.top()-48;
	s1.pop();
	if(s1.empty()){
		    	cout<<"result="<<n3;
			}
	
	return 0;
			
}


