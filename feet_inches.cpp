#include<iostream>
using namespace std;
class FeetInches{
	
	public:
		float feets, inches;
		
		FeetInches()
		{
			feets=0;
			inches=0;
		}
		FeetInches(float first, float second)
		{
			feets=first;
			inches=second;
		}
		FeetInches operator +(FeetInches obj)
		{
			FeetInches obj1;
			obj1.feets=feets+obj.feets;
			obj1.inches=inches+obj.inches;
			return obj1;
		}
		FeetInches operator *(FeetInches obj)
		{
			FeetInches obj1;
			obj1.feets=feets*obj.feets;
			obj1.inches=inches*obj.inches;
			return obj1;
		}

};
main()
{
	float one, two, third, fourth;
	cout<<"Enter Feets and Inches of first respectively: ";
	cin>>one>>two;
	cout<<"Enter Feets and Inches of Second respectively: ";
	cin>>third>>fourth;
	FeetInches obj4(one,two),obj5(third,fourth);
	FeetInches obj6;
	
	obj6=obj4+obj5;
	cout<<obj4.feets<<" feets , "<<obj4.inches<<" inches Sum "<<obj5.feets<<" feets , "<<obj5.inches<<" inches is "<<obj6.feets<<" feets,"<<obj6.inches<<" inches"<<endl;
	obj6=obj4*obj5;
	cout<<obj4.feets<<" feets , "<<obj4.inches<<" inches times "<<obj5.feets<<" feets , "<<obj5.inches<<" inches is "<<obj6.feets<<" feets,"<<obj6.inches<<" inches"<<endl;

}
