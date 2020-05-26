#include<iostream>
using namespace std;
class construct{
	public:
		int val;
		//parametrized constructor
		construct(int val1){
			val=val1;
		}
};
int main(){
	construct c1(10);
	cout<<c1.val;
}
