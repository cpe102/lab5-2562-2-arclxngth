#include<iostream>
#include<string>
using namespace std;

string mixText(string x, string y){

	int L=x.size();
	int N=y.size();

	if(L==N){
		int i=0;
		string s;
		while(i<L){
			
			s = s+x[i]+y[i];
			i++;
		}
		return s;
	}
	else{
		return "E";
	}
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
