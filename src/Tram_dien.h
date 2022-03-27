#ifndef TRAMDIEN_H
#define TRAMDIEN_H

class Tram_dien{
	protected:
		float muc_Nang_Luong = 100;
	public:
		tram_Dien(){
		}
		
		float get_Muc_Nang_Luong(){
			return this->muc_Nang_Luong;
		}
};

#endif
