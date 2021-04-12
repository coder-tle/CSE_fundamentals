#include<bits/stdc++.h>
using namespace std;

class Car{
		public : 
		virtual void start()=0;
		virtual void stop()=0;
		
		/*virtual void start(){
			cout<<"Car started\n";
		}
		virtual void stop(){
			cout<<"Car stopped\n";
		}*/
	
};


class Innova : public Car{
		public :
			void start(){
				cout<<"Innova started\n";
			}
			void stop(){
				cout<<"Innova stopped\n";
			}
		
};

class Swift : public Car{
		public :
			void start(){
				cout<<"Swift started\n";
			}
			void stop(){
				cout<<"Swift stopped\n";
			}
		
};





int main(){
		Car * bptr;
		
		bptr = new Innova();
		bptr->start();
		bptr->stop();
		//delete bptr;
		
		bptr = new Swift();
		bptr->start();
		bptr->stop();
		
		//delete bptr;
		return 0;
}
