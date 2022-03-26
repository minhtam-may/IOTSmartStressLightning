#include <bits/stdc++.h>
using namespace std;
class thoi_Tiet
{
	protected:
		int humid;
		int cur_humid = 0;
	public:
		void nhapvaodoam()
		{cout<< "\nNhap do am hien tai: " ; cin>> cur_humid;}
		void inradoamhientai()
		{
		 showthoi_Tiet();
		 cout<<endl<<"Do am hien tai la: "<< cur_humid<<"%";
		 bool check = true ;
		 while(check)
		 {
		 	if (cur_humid> humid)
		 {
		 	cout <<endl<<"Do am hien tai lon -Can tang  them do sang";
		 	check=false;
		 }else
		{
			cout<<"\nKhong can tang  them do sang ";
			break;
		}
	}
		
}
        void showthoi_Tiet()
        {
        	cout<<endl<<"Do am ly tuong : "<< humid<< "%";
		}
};
