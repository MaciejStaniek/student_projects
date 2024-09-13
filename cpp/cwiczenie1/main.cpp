#include <iostream>
#include <fstream>
using namespace std;
int main(){
	string a;
	int x=0;

fstream Notatka;
Notatka.open("notatka.txt");
	do{
	cout<<"1-wpisz tekst do pliku, 2-pokaz tekst";
	cin>>x;
if(x==1){
	cout<<"231";
		cin>>a;
	fstream Notatka;
	Notatka.open("notatka.txt");
	Notatka<<a;
}
Notatka.close();

if(x==2){

if(Notatka.good()){
	string tekst;
		while(!Notatka.eof()){
			getline(Notatka,tekst);
			cout<<tekst<<endl;
}
Notatka.close();
}
}
}
	return 0;
}
