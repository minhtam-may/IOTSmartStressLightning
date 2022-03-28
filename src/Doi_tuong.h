#ifndef DOITUONG_H
#define DOITUONG_H

class Doi_tuong{
	protected:
		char ten[100];
		int so_Luong;
	public:
		static int tong;
		Doi_tuong(){
			strcpy(this->ten,"");
			this->so_Luong = 0;
		}
		
		void set_Doi_Tuong(char t[100], int s){
			strcpy(t, this->ten);
			this->so_Luong = s;
		}
		
		string get_Ten(){
			return this->ten;
		}
		int get_So_Luong(){
			return this->so_Luong;
		}
		
		void nhap_Doi_Tuong(){
			cout << endl << "Ten doi tuong: "; cin.get(this->ten, 100);
			cout << endl << "So luong: "; cin >> this->so_Luong;
			this->tong += this->so_Luong;
		}
		
		void in_Doi_Tuong(){
			cout << endl << "| " << setw(11) << this->ten << " | " << setw(11) << this->so_Luong << " |";
		}
};

int Doi_tuong::tong = 0;

#endif
