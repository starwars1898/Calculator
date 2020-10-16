#include<iostream>
#include<cmath>
using namespace std;
int num1,num2,add,sub,mul,rem;
double div;
char choose,option;

int main(){
do {
system("CLS");
cout<<"Welcome To MYCALCU"<<endl;
cout<<"Choose Operation [a]addition [m]multiplication [s]subtraction [d]division ";
cout<<"\n\nChoose : ";
cin>>choose;
cout<<"\n\nEnter First Num : ";
cin>>num1;
cout<<"\nEnter Second Num : ";
cin>>num2;

switch (choose)
	{
		case 'a':
			add = num1 + num2;
			cout<<"\nAnswer : "<<add;
			cout<<"\nDo you Want to Continue? Y/N : ";
			cin>>option;
			break;
		case 'm':
			mul = num1 * num2;
			cout<<"\nAnswer : "<<mul;
			cout<<"\nDo you Want to Continue? Y/N : ";
			cin>>option;
			break;
		case 's':
			sub = num1 - num2;
			cout<<"\nAnswer : "<<sub;
			cout<<"\nDo you Want to Continue? Y/N : ";
			cin>>option;
			break;	
		case 'd':
			div = num1 / num2;
			cout<<"\nAnswer : "<<div;
			cout<<"\nDo you Want to Continue? Y/N : ";
			cin>>option;
			break;
		default:
			system("CLS");
			cout<<"\nThe Character You Entered is Invalid!";
			cout<<"\nDo you Want to Continue? Y/N : ";
			cin>>option;
			break;			 	
	}


}while(option=='y'||option=='Y');

return 0;
}
