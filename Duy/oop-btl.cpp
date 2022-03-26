#include <iostream>
#include <string.h>

using namespace std;

class Den{
	protected:
		string trangThai;
		float tieuThuNL, congSuat, phamVi, thoiGianSang;
		int cuongDoSang;
	public:
		Den(){
			
		}
		
		void Trangthai() {
			cout<<"Nhap tinh trang cua den h(hong)/b(binh thuong): ";
			char c; cin>>c;
			if (c == 'b') {
				cout<<"Den o trang thai binh thuong"<<endl;
			}
			else cout<<"Den dang bi hong, can thay ngay lap tuc!"<<endl;
		}
		
		void setThoigiansang(float thoiGianSang) {
			this->thoiGianSang = thoiGianSang;
		}
		
		float getThoigiansang() {
			return thoiGianSang;
		}
		
		void setCongsuat(float congSuat) {
			this->congSuat = congSuat;
		}
		
		float getCongsuat() {
			return congSuat;
		}
		
		void setPhamvi(float phamVi) {
			this->phamVi = phamVi;
		}
		
		float getPhamvi() {
			return phamVi;
		}
		
		void setCuongdosang(int cuongDoSang) {
			this->cuongDoSang = cuongDoSang;
		}
		
		int getCuongdosang() {
			return cuongDoSang;
		}
		
		float getTieuthuNL () {
			this->tieuThuNL = this->congSuat * this->thoiGianSang;
			return this->tieuThuNL;
		}
};

int main() {
	Den d;
	d.Trangthai();
	d.setThoigiansang(10);
	d.setCongsuat(200);	
	d.setPhamvi(10);
	d.setCuongdosang(250);	
	cout<<"Cong suat cua den: "<<d.getCongsuat()<<" kW."<<endl;
	cout<<"Thoi gian sang cua den: "<<d.getThoigiansang()<<" h."<<endl;
	cout<<"Pham vi chieu sang cua den: "<<d.getPhamvi()<<" m."<<endl;
	cout<<"Cuong do sang cua den: "<<d.getCuongdosang()<<" cd."<<endl;
	cout<<"Muc tieu thu nang luong cua den: "<<d.getTieuthuNL()<<" kW/h."<<endl;
}
