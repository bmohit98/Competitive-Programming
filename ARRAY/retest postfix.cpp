#include <iostream>
#include<stack>
#include<string.h>
#include <stdlib.h>
#include<math.h>
using namespace std;
int main(){
	int i=0,j;
	int k=0;
	int n1,n2,n3;
	stack <int> s1;
	string expression;
	getline(cin,expression);
	while(expression[i]!='\n')
	{
		if('0'<expression[i] && expression[i]<'9'){	
			k=0;
			while(expression[i]!=' '){
				    k=k*10+int(expression[i])-48;
				    i++;
			}
			cout<<k<<"\n";
				    
		 s1.push(k);	
		}
		else if(expression[i]==' ')
		i++;
		else{
			n1=s1.top();
			s1.pop();
			n2=s1.top();
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
			cout<<n3;
			s1.push(n3);
			
			i++;
		}
	}
	n3=s1.top();
	s1.pop();
	if(s1.empty()){
		    	cout<<"result="<<n3;
			}
	
	return 0;
			
}


