#include<bits/stdc++.h>
#include<string.h>
#include"conio.h"
using namespace std;
class STRING {
	private:
		string str;
	public:
		STRING() {
			str = "";
		}
		STRING (string a) {
			str = a;
		}
		void nhap();
		void xuat();
		void xoakttrangodauvacuoi();
		void xoakhoangtranggiuacackt();
		void chuyensangchuhoa();
		void chuyensangchuthuong();
		void insertxau();
		void trichkitubenphai();
		void trichkitubentrai();
		void trichkituovitribatki();
		int menu();
		void run();
};

void STRING :: nhap() {
	cout<<"\nNhap xau ki tu: ";
	cin.ignore();
	getline(cin,str);
}

void STRING :: xuat() {
	cout<<"\nXau vua nhap la: ";
	cout<<str<<endl;
}

void STRING :: xoakttrangodauvacuoi() {
	cout<<"\nXau sau khi xoa kt trang o dau va cuoi la: ";
	while(str[0] == ' ') {
		str.erase(str.begin() + 0);
	}
	while(str[str.length() - 1] == ' ') {
		str.erase(str.begin() + str.length() - 1);
	}
	cout<<str<<endl;
}

void STRING :: xoakhoangtranggiuacackt() {
	cout<<"\nXau sau khi xoa kt trang giua cac kt trang la: ";
	for(int i=0; i<str.length(); i++) {
		if(str[i] == ' ' && str[i + 1] == ' ') {
			str.erase(str.begin() + i);
			i--;
		}
	}
	cout<<str<<endl;
}

void STRING :: chuyensangchuhoa() {
	for(int i=0; i<str.length(); i++) {
		if(str[i]>96 && str[i]<122) str[i]-=32;
	}
	cout<<"\nXau sau khi chuyen sang chu hoa la: "<<str;
}

void STRING :: chuyensangchuthuong() {
	for(int i=0; i<str.length(); i++) {
		if(str[i]>='A' && str[i]<='Z') str[i]+='a'-'A';
	}
	cout<<"\nXau sau khi chuyen sang chu thuong la: "<<str;
}

void STRING :: insertxau() {
	int vitri = str.length();
	string istr;
	cout<<"Nhap xau muon noi them: ";
	cin.ignore();
	getline(cin,istr);
	str.insert(vitri,istr);
	cout<<"\nXau sau khi noi them la: ";
	cout<<str<<endl;
}

void STRING :: trichkitubenphai() {
	int n;
	cout<<"\nSo ki tu ben phai muon trich ra: ";
	cin >> n;
	cout<<"\nXau trich ra n ki tu ben phai la: ";
	cout<<str.substr((str.length()-n),n);
}

void STRING :: trichkitubentrai() {
	int n;
	cout<<"\nSo ki tu ben trai muon trich ra:";
	cin >> n;
	cout<<"\nXau trich ra n ki tu ben trai la:";
	cout<<str.substr(0,n);
}

void STRING :: trichkituovitribatki() {
	int i;
	cout<<"\nNhap vi tri bat dau trich ra: ";
	cin >> i;
	int n;
	cout<<"\nSo ki tu muon trich ra: ";
	cin >> n;
	cout<<"\nXau sau khi trich ra: "<<str.substr(i,n);
}

int STRING :: menu() {
	cout<<"1. Nhap vao xau ky tu: ";
	cout<<"\n2. In ra xau ky tu: ";
	cout<<"\n3. Cat cac ky tu trang o hai dau cua xau: ";
	cout<<"\n4. Cat cac ky tu trang thua trong xau: ";
	cout<<"\n5. Chuyen doi toan bo xau thanh ky tu hoa: ";
	cout<<"\n6. Chuyen doi toan bo xau thanh ky tu thuong: ";
	cout<<"\n7. Noi them mot xau ky tu vao xau hien co: ";
	cout<<"\n8. Trich ra n ky tu o phia phai cua xau: ";
	cout<<"\n9. Trich ra n ky tu o phia trai cua xau: ";
	cout<<"\n10. Trich ra n ky tu o ke tu vi tri thu i cua xau: ";
	cout<<"\nBam enter de lua chon cac chuc nang khac!!";
	cout<<"\nChon chuc nang tu 1-10: ";
	int n;
	cin>>n;
	return n;
}

void STRING :: run() {
	int ch;
	do {
		system("cls");
		ch = menu();
		system("cls");
		switch(ch) {
			case 1:
				nhap();
				break;
			case 2:
				xuat();
				break;
			case 3:
				xoakttrangodauvacuoi();
				break;
			case 4:
				xoakhoangtranggiuacackt();
				break;
			case 5:
				chuyensangchuhoa();
				break;
			case 6:
				chuyensangchuthuong();
				break;
			case 7:
				insertxau();
				break;
			case 8:
				trichkitubenphai();
				break;
			case 9:
				trichkitubentrai();
				break;
			case 10:
				trichkituovitribatki();
				break;
		}
		getch();
	} while(ch!=11);
}


