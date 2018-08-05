#include<iostream>
using namespace std;
class polynomial{
	pair<int,int>*equation;
	int term;
	public:
		polynomial(){
		}
		polynomial(int size){
			term=size;
			equation=new pair<int,int>[term];
		}
		void input(){
			for(int i=0;i<term;i++){
				cin>>equation[i].first>>equation[i].second;
			}
		}
		polynomial operator+(polynomial f2); 
		polynomial operator*(polynomial f2); 
		void show(){
			int i=0;
			while(i<term){
				cout<<equation[i].first<<","<<equation[i].second<<" ";
				i++;
			}
			cout<<"\n";
		}	
};
polynomial polynomial::operator+(polynomial p1){
	polynomial result(term+p1.term);
	int k=0,i=0,j=0;
	int a=term;
	int b=p1.term;
		while(a>0&&b>0){
			if(equation[i].second==p1.equation[j].second){
				result.equation[k].first=equation[i].first+p1.equation[j].first;
				result.equation[k].second=equation[i].second;
				k++;
				i++;
				j++;
				a--;b--;
			}
			else if(equation[i].second>p1.equation[j].second){
				result.equation[k].first=equation[i].first;
				result.equation[k].second=equation[i].second;
				k++;
				i++;
				a--;	
				
			}
			else {
				result.equation[k].first=p1.equation[j].first;
				result.equation[k].second=p1.equation[j].second;
				k++;
				j++;
				b--;	
			}
			
		}
	 	while(a>0){
	 			result.equation[k].first=equation[i].first;
				result.equation[k].second=equation[i].second;
				k++;
				i++;
				a--;
		 }
	 	while(b>0){
	 			result.equation[k].first=p1.equation[j].first;
				result.equation[k].second=p1.equation[j].second;
				k++;
				j++;
				b--;
		 }
		result.term=k;
		 return result;
}

	
polynomial polynomial::operator*(polynomial p1){
	polynomial temp(p1.term);
	polynomial result(term*p1.term);
	int k=0,i=0,j=0,l;
		for(i=0;i<term;i++){
			l=0;
			for(j=0;j<p1.term;j++){
				temp.equation[l].first=equation[i].first*p1.equation[j].first;
				temp.equation[l].second=equation[i].second+p1.equation[j].second;
				l++;
				k++;				
				}
				result=result+temp;		
			}
		result.term=k;
		 return result;
}
int main(){
	polynomial p1(3),p2(3),p3;
	p1.input();
	p2.input();
	p3=p1*p2;
	p1.show();
	p2.show();
	p3.show();
}
