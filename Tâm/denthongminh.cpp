#include <bits/stdc++.h>
using namespace std;
class Do_am
{
	protected:
		int do_Am;
		int cur_do_Am = 0;
	public:
		void nhapvaodoam()
		{cout<< "\nNhap do am hien tai: " ; cin>>cur_do_Am ;}
		void inradoamhientai()
		{
		 showDo_am();
		 cout<<endl<<"Do am hien tai la: "<< cur_do_Am<<"%";
		 bool check = true ;
		 while(check)
		 {
		 	if (cur_do_Am  > do_Am)
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
        	cout<<endl<<"Do am ly tuong : "<< do_Am<< "%";
		}
};
