#include <bits/stdc++.h>
using namespace std;
int main ()
{
	float s, v, t;
	int status=0;
	cout << "Masukkan Sudut :";
	cin >> s;
	cout << "Masukkan Kecepatan :";
	cin >> v;
	cout << "Masukkan Waktu :";
	cin >> t;
	cin>>s>>v>>t;
	float sinA = sin(s*22/7/180);
	float hasil = ((pow(v,2))* (pow(sinA,2)))/20;
	if (t<=hasil){
		status++;
		cout<<"Status : "<<status<<endl<<"Keinggian :"<<hasil;
	}
	else {
		cout<<"Status :"<<status<<endl<<"Ketinggian :"<<hasil;
	}
}
