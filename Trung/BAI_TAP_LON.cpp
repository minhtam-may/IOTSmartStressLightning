#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class vat_Can{
	protected:
		string ten;
		int so_Luong;
	public:
		static int tong;
		vat_Can(){
		}
		
		void set_Vat_Can(string t, int s){
			this->ten = t;
			this->so_Luong = s;
		}
		
		string get_Ten(){
			return this->ten;
		}
		int get_So_Luong(){
			return this->so_Luong;
		}
		
		void nhap_Vat_Can(){
			cout << endl << "Ten vat can: "; getline(cin, ten);
			cout << endl << "So luong: "; cin >> this->so_Luong;
			this->tong += this->so_Luong;
		}
		
		void in_Vat_Can(){
			cout << endl << "| " << setw(11) << this->ten << " | " << setw(11) << this->so_Luong << " |";
		}
};

int vat_Can::tong = 0;


class tram_Dien{
	protected:
		float muc_Nang_Luong = 100;
	public:
		tram_Dien(){
		}
		
		float get_Muc_Nang_Luong(){
			return this->muc_Nang_Luong;
		}
};

int main(){
	
	vat_Can *vc;
	vc = new vat_Can[100];
	int x = 0;
	
	char tiep = 'c';
	do{
		vc[x].nhap_Vat_Can();
		cout << endl << "nhap tiep(c): "; cin >> tiep;
		x++;
	} while(tiep == 'c');
	
	cout << endl << "_____________________________";
	cout << endl << "|     DANH SACH VAT CAN     |";
	cout << endl << "-----------------------------";	
	cout << endl << "| " << setw(10) << "Ten vat can" << " | " << setw(11) << "so luong" << " |";
	cout << endl << "-----------------------------";
	for(int i = 0; i < x; i++){
		vc[i].in_Vat_Can();
		cout << endl << "-----------------------------";
	}
	cout << endl << endl << "Tong so luong vat can la: " << vat_Can::tong;

}













