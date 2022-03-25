#include <bits/stdc++.h>
using namespace std;

class Time {
	
	protected:
		time_t t;
	public:
		string getCurrentTime(){
			time(&t);
			return ctime(&t);
		}
		
		string setTime(string time){
			string res = getCurrentTime();
			for(int i=11;i<=18;i++){
				res[i] = time[i - 11];
			}
			return res;
		}	 
		
		void run(int sec){
			// 1s can 10000/2 buoc lap 10s la 200000 buoc lap => 1s là 20000
			for(int i=0;i<sec * 10000;i++){
				time(&t);
				char *currentTime = ctime(&t); 
				currentTime[strlen(currentTime) - 1] = '\0';
				cout <<"\r" << currentTime;
			}
		}
		
		string setDay(string day){
			string res = getCurrentTime();
			for(int i=11;i<=18;i++){
				res[i] = time[i - 11];
			}
			return res;
		}
};
  
  
int main (){
	Time time;
	cout << time.getCurrentTime();
	int sec;
	cout <<"Enter second: ";
	cin >> sec;
	time.run(sec);
}
