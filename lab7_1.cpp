#include<iostream>
#include<string>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}

string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

int main(){
	string T;
	string R;
	string P;
	int i = 0;
    cout << "Input text: ";
	cin >> T;
	int l = T.size();
	R = func1(T);
    cout << "Reversed text: " << R << endl ; 
	T = func3(T);
	R = func3(R);

	while(i < l){
		if(T[i] == R[i]){
			P = "Yes" ;
		}else{
			P = "No" ;
		}
		i++;
	}
    cout << "Palindrome: " << P ;
    return 0;
}
