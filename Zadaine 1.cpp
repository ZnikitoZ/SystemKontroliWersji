#include<iostream>
#include<cmath>
 using namespace std;
 
int main(){
int n, m, a;
	cout<<"wpisz liczbe m"<< endl;
		cin>>m;
	cout<<"wpmisz liczbe n"<< endl;
		cin>>n;
if(m<=0 || n<=0)
	cout<<"Nie mo�esz wpisa� liczbe ujemn�"	<<endl;	
	if(n>m)
	cout<<"Nie mo�esz wpisa� liczbe n wi�kszej od m"<<endl;	
a=1;
	while(m>n*a){	
		cout<<n*a<<endl;
		a++; 
	}		
return 0;
}

