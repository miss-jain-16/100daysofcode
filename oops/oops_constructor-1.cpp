#include<iostream>
using namespace std;

class construct{
	public:
	int a,b;
	//this is same as of class _name
	public:
	construct(){
       a=19;
       b=0;
	}
};
int main(){
	construct c1;
	cout<<c1.a<<" "<<c1.b;
	return 0;
}
