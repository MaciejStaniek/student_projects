#include <iostream>

using namespace std;
int x;
int main(){
	string przedmiot;
	cout<<"podaj wartosc, moze ona wynosic K,N lub P"<<endl;
	cin>>przedmiot;
	while(przedmiot!="K"&&"N"&&"P"){
	cout<<"Bledna wartosc wpisz jeszcze raz :";
	cin>>przedmiot;
}
	if(przedmiot=="K"&&"N"&&"P"){
	srand(time(0));
	int x= rand() %4;
	cout<<x;
}
	return 0;
}
