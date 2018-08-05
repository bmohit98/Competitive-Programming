#include<iostream>
#include<stdlib.h>
using namespace std;
class stack{
	int top;
	int size;
	int *space;
	public:
		stack(){
			top=-1;
		    size=100;
			space=(int *)malloc(sizeof(int)*size);
		}
		int push(int value){
			if(top==size-1){
				return -1;
			}
			top++;
			space[top]=value;
			return 1;
		}
		void display(){
			int i;
			for(i=0;i<=top;i++){
				cout<<space[i]<<" ";
			}
		}
		int pop();
		stack (stack & t);
		~stack();
	};
	int stack:: pop(){
				if(top==-1)
			 		return -1;
			 	int x=space[top];
			 	top--;
			 	return x;
			}
	stack :: ~stack(){
		
		free(space);
	}
	stack :: stack(stack& t){
		top=t.top;
		size=t.size;
		space=(int *)malloc(sizeof(int)*size);
		for(int i=0;i<size;i++){
			space[i]=t.space[i];
		}
		cout<<"hello";
	}
int main(){
	stack s1;
	s1.push(30);
	s1.push(10);
	s1.push(60);
	stack s2=s1;
	cout<<s1.pop();
	
	s1.push(40);
	s2.push(40);
	s1.display();
	s2.display();	
}
