#include <bits/stdc++.h>
using namespace std;

class Thoi_gian {
	
	protected:
		time_t t;
		string thoi_Gian; 
	public:
		
		Thoi_gian(){
			thoi_Gian = "00:00:00";
		}
		
		string hien_Thi_Thoi_Gian(){
			time(&t);
			string res = ctime(&t);
			for(int i=0;i<8;i++){
				thoi_Gian[i] = res[i + 11];
			}
			return thoi_Gian;
		}
		
		string dat_Thoi_Gian(string gio_Phut_Giay){
			thoi_Gian = gio_Phut_Giay;
			return thoi_Gian;
		}	 

};
  
  
int main (){
	Thoi_gian time;
	cout << time.hien_Thi_Thoi_Gian() << endl;
	cout << time.dat_Thoi_Gian("00:50:00");
}
