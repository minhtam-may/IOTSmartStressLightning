#ifndef THOIGIAN_H
#define THOIGIAN_H

class Thoi_gian {

	protected:
		time_t t;
		string thoi_Gian; 
	public:
		
		Thoi_gian(){
			thoi_Gian = "00:00:00";
		}
		
		string get_Thoi_Gian(){
			time(&t);
			string res = ctime(&t);
			for(int i=0;i<8;i++){
				thoi_Gian[i] = res[i + 11];
			}
			return thoi_Gian;
		}
		
		string set_Thoi_Gian(string gio_Phut_Giay){
			thoi_Gian = gio_Phut_Giay;
			return thoi_Gian;
		}	 
		
		int get_Gio (){
			int gio = (thoi_Gian[0] - '0') * 10 +  (thoi_Gian[1] - '0');
			return gio;
		}
		
		int get_Phut (){
			int phut = (thoi_Gian[3] - '0') * 10 +  (thoi_Gian[4] - '0');
			return phut;
		}
		
		int get_Giay (){
			int giay = (thoi_Gian[6] - '0') * 10 +  (thoi_Gian[7] - '0');
			return giay;
		}
		
		int khoang_Thoi_Gian (Thoi_gian t1, Thoi_gian t2) {
			
			int giay1, phut1, gio1;
			
			if(t2.get_Giay() > t1.get_Giay()){
        		phut1 = t1.get_Phut();
				phut1--;
        		giay1 = t1.get_Giay() + 60;
    		}

    		int giay = giay1 - t2.get_Giay();
    
			if(t2.get_Phut() > t1.get_Phut()){
        		gio1 = t1.get_Gio();
				gio1--;
        		phut1 = t1.get_Phut() + 60;
    		}
    
			int phut = phut1 - t2.get_Phut();
    		int gio = gio1 - t2.get_Gio();
    		
    		return gio * 60 * 60 + phut * 60 + giay; 
    		
		}
};

#endif
