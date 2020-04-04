	#include <iostream>
	using namespace std;
	
	int main ()
	{
		int  date;
		string M="0";
		
		cout << "ENTER YOUR BIRTHDAY" << endl ;
		cout << "MONTH= " ;
		cin >> M;
		
		
		cout <<"DATE= ";
		cin >> date;
		cout << "YOUR ZODIAC SIGN IS: "; 
		
		if (M == "1" || M == "January" || M== "JANUARY")
		{

			if(date <= 19 )
			cout << "CAPRICON";
			else 
			cout <<"AQUARIOUS";
		}
		
		else if (M == "2" || M == "FEBURARY" || M =="feburary")
		{
			
			if(date <= 19 )
			cout << "AQUARIOUS";
			else 
			cout <<"PISCES";
		}
		
		else if (M == "3" || M == "MARCH" ||M == "march")
		{

			if(date <= 20 )
			cout << "PISCES";
			else 
			cout <<"ARIES";
		}
		
		else if (M == "4" || M == "APRIL" || M == "april")
		{
			if(date <= 20 )
			cout << "ARIES";
			else 
			cout <<"TAURUS";
		}
		
		else if (M == "5" || M == "MAY" || M =="may")
		{
			if(date <= 20 )
			cout << "TAURUS";
			else 
			cout <<"GEMINI";
		}
		
		else if (M == "6" || M == "JUNE" || M =="june")
		{
			if(date < 21 )
			cout << "GEMINI";
			else 
			cout <<"CANCER";
		}
		
		else if (M == "7" || M == "JULY" || M == "july")
		{
			if(date <= 22)
			cout << "CANCER";
			else 
			cout <<"LEO";
		}
		
		else if (M == "8" || M == "AUGUST" ||M ==  "august")
		{
			if(date < 23 )
			cout << "LEO";
			else 
			cout <<"VIRGO";
		}
		
		else if (M == "9" || M == "SEPTEMBER" || M== "september")
		{
			if(date <= 22  )
			cout << "VIRGO";
			else 
			cout <<"LIBRA";
		}
		
		else if (M == "10" || M == "OCTOBER" || M == "october")
		{
			if(date <= 22 )
			cout << "LIBRA";
			else 
			cout <<"SCORPIO";
		}
		
		else if (M == "11" || M == "NOVEMBER" ||M ==  "november")
		{
			if(date <= 21 )
			cout << "SCORPIO";
			else  
			cout <<"SAGITARIUS";
		}
		
		else if (M == "12" || M == "DECEMBER" ||M ==  "december")
		{
			cout<<"YES"<<"  "<<M;
			if(date <= 21 )
			cout << "SAGITARIOUS";
			else 
			cout <<"CAPRICON";
		}
		
		else
		{ 
			cout << "invalid date";			
		}
		
		
		
		return 0; 
		
	}
	
	
	
