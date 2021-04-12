#include<bits/stdc++.h>
using namespace std;

// variable name all small case with underscore in between
// function class name First letter capital of each word, no separation in between
 
class Base{
	public :
		void func1(){
			cout<<"Func1 is called \n";
		}
		void func2(){
			cout<<"Func2 is called \n";
		}
		void func3(){
			cout<<"Func3 is called \n";
		}
		
	};
	
	
class Derived : public Base{
	
		public:
			// THIS REDEFINITION OF FUNCTION MAKES NO SENSE
			void func1(){
				cout<<"Derived func1 is being called\n";
			}
			void func4(){
				cout<<"Func4 is called \n";
			}
			void func5(){
			cout<<"Func5 is called \n";
		}
		
	
};


int main(){
		
		Base * ptr;
		ptr = new Derived();
		ptr->func1();
		ptr->func2();
		ptr->func3();
		//ptr->func4(); // base class pointer has no record or knowledge about
									// function defined in derived class 
									// so, calling function of derived class using base pointer 
									// gives error.
		//ptr->func5();
		
		delete ptr;
		return 0;
}


