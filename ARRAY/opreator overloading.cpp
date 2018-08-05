#include <iostream> 
using namespace std;
class fraction { 
		int denometer, numeator;
		public: fraction() {} 
		fraction(int n, int d) { 
			numeator = n; 
			denometer = d;
		 }
		 void show(){
		 	cout<<numeator<<"\n";
		 	cout<<denometer<<"\n";
		 }
		fraction operator+(fraction f2); 
		fraction operator-(fraction f2); 
		fraction operator*(fraction f2); 
		fraction operator/(fraction f2);
		fraction operator++();
		fraction operator--();
		bool  operator<(fraction f2); 
		bool operator>(fraction f2);
		bool operator==(fraction f2);
	};

    fraction fraction::operator+(fraction f2) {
	  fraction f3;
	  f3.numeator = (f2.denometer * numeator)+(f2.numeator*denometer);
	  f3.denometer = f2.denometer *denometer;
	  return f3;
	}
	fraction fraction::operator-(fraction f2) {
	  fraction f3;
	  f3.numeator = (f2.denometer * numeator)-(f2.numeator*denometer);
	  f3.denometer = f2.denometer *denometer;
	  return f3;
	}
    fraction fraction::operator*(fraction f2) {
	  fraction f3;
	  f3.numeator = (f2.numeator * numeator);
	  f3.denometer = f2.denometer *denometer;
	  return f3;
	}
	fraction fraction::operator/(fraction f2) {
	  fraction f3;
	  f3.numeator = (f2.denometer * numeator);
	  f3.denometer = f2.numeator *denometer;
	  return f3;
	}
	fraction fraction::operator++() { 
		numeator=numeator+denometer;
		
		return *this;
	}
	fraction fraction::operator--() { 
		numeator=numeator-denometer;
		return *this;
	}
	bool fraction::operator<(fraction f2) {
	  	
	  		return numeator*f2.denometer<denometer*f2.numeator;
	}
	bool fraction::operator>(fraction f2) {
		return numeator*f2.denometer>denometer*f2.numeator;
	}
	bool  fraction::operator==(fraction f2) {
		return numeator*f2.denometer==denometer*f2.numeator;
	}
int main(){
	fraction f1(10,20),f2(15,7),f3;
	f3=f1+f2;
	f3.show();
	f3=f1-f2;
	f3.show();
	f3=f1*f2;
	f3.show();
	f3=f1/f2;
	f3.show();
	++f1;
	f1.show();
	--f2;
	f2.show();
	if(f1>f2)
		cout<<"f1 is greator\n";
	if(f1<f2)
		cout<<"f1 is less then\n";
	if(f1==f2)
		cout<<"f1 is equal to f2\n";
}
	
	

	
	

