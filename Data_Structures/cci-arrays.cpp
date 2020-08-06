/*
CRACKING CODE INTERVIEW======>
*/

/*
Implement an algorithm to determine if 
a string has all unique characters . What 
if you can not use additional data structures
*/
#include<bits/stdc++.h>
using namespace std;
bool check(string str){
	
	sort(str.begin(),str.end());
	for(int i=0;i<str.length();i++){
		if(str[i]==str[i+1]){
			return false;
		}
	}
	return true;
}
int main() 
{ 
  
    string str = "GeeksforGeeks"; 
  
    if (check(str)) { 
        cout << "The String " << str 
             << " has all unique characters\n"; 
    } 
    else { 
  
        cout << "The String " << str 
             << " has duplicate characters\n"; 
    } 
    return 0; 
} 
