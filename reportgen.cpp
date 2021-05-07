#include<iostream>
#include<conio.h>
#include<string.h>
#include<fstream>
using namespace std;


string user,pass,u,p;

char choose2,choose3,choose4;

int main();
int success();
int profile();
int studport();

int fail = 0;
int count = 1;



void repeat()
{
	success();
}
profile()
{

   
	cout<<"\n\t\t\t\t\t\t*** REGISTERED USERS ***"<<endl;
		
		
	fstream fIn;
	fIn.open("members.txt" , ios::in);
	if(fIn.is_open())
	{
			cout<<"\n\n\t\t** The List of Profile **";
		    cout<<"\n\n";
		string s;
		while(getline( fIn, s ))
		{
			count++; 
			cout<<"\n\t\t"<<"- "<< s << endl;
		}
	cout<<"\n\t\tNumber of Student : "<<count-1;		
	cout<<"\n\n\t\t(SYSTEM) :[M] Main   \n";
	cout<<"\n\t\tChoose : ";
		cin>>choose2;
		
	switch(choose2)	
	{
		case 'm':
			system("CLS");
			repeat();
			break;
		default:
			system("CLS");
			count = 1;
		    cout<<"(SYSTEM) : Invalid Key!";
			success();
			break;		
	}
	}
	else
	{
		cout<<"Error Opening File"<<endl;
	}
}
void tmodule()
{
    char choose3;	
	cout<<"\n\t\tTEACHER'S SCHEDULE "<<endl;	 	
	fstream mod;
	mod.open("profile1.txt" , ios::in);
	
	cout<<"\n\n"<<endl;
	if(mod.is_open())
	{
		string module;
		while(getline( mod, module ))
		{ 
			cout<<"\n\t\t"<< module << endl;
		}
    }
    else
	{
		cout<<"Error Opening File"<<endl;
	}
	cout<<"\n\n\t\t(SYSTEM) :[M] Main\n";
	cout<<"\n\t\tChoose : ";
		cin>>choose3;
		
	switch(choose3)	
	{
		case 'm':
			system("CLS");
			success();
			break;
		default:
			system("CLS");
		    cout<<"(SYSTEM) : Invalid Key!";
			tmodule();
			break;		
	}
    
}
void logout()
{
	    char off;
		cout<<"\n\t\t\t\t\t*** Welcome to ReportGen Access v.1 ***"<<endl;
		cout<<"\n\n\t(SYSTEM) : Once you log out your account you need to Rerun the Program again for Security Purpose\n";
		cout<<"\n\n\t\tDo you Want to Log out Y/N? : ";
		cin>>off;
		
		switch(off)
		{
			case 'y':
			system("CLS");
			cout<<"\n\n\tLOG OUT Successful!";
			return;
			break;
			case 'n':
			system("CLS");	
			success();
			break;
			default:
			system("CLS");	
			cout<<"\n\nInvalid Key!";	
			logout();
			break;
		}
		
}
void studprofile()
{
	char choosestud1;
	cout<<"\n\t\t\t\t\t\t*** STUDENT PROFILE ***"<<endl;
	
	fstream mod2;
	mod2.open("profile1.txt" , ios::in);
	
	cout<<"\n\n"<<endl;
	if(mod2.is_open())
	{
		string module2;
		while(getline( mod2, module2 ))
		{ 
			cout<<"\n\t\t"<< module2 << endl;
		}
    }
    else
	{
		cout<<"Error Opening File"<<endl;
	}
    	cout<<"\n\n\t\t(SYSTEM) :[M] Main  [S] Student Portal\n";
	cout<<"\n\t\tChoose : ";
		cin>>choosestud1;
		
	switch(choosestud1)	
	{
		case 'm':
			system("CLS");
			success();
			break;
		case 's':
		    system("CLS");
			studport();
		break;		
		default:
			system("CLS");
		    cout<<"(SYSTEM) : Invalid Key!";
			studprofile();
			break;		
	}
}
void studport1()
{
	char choosestud;
	cout<<"\n\t\t\t\t\t\t*** STUDENT GRADES ***"<<endl;
	
	fstream mod1;
	mod1.open("profile1.txt" , ios::in);
	
	cout<<"\n\n"<<endl;
	if(mod1.is_open())
	{
		string module1;
		while(getline( mod1, module1 ))
		{ 
			cout<<"\n\t\t"<< module1 << endl;
		}
    }
    else
	{
		cout<<"Error Opening File"<<endl;
	}
	cout<<"\n\n\t\t(SYSTEM) :[M] Main  [S] Student Portal\n";
	cout<<"\n\t\tChoose : ";
		cin>>choosestud;
		
	switch(choosestud)	
	{
		case 'm':
			system("CLS");
			success();
			break;
		case 's':
		    system("CLS");
			studport();
		break;		
		default:
			system("CLS");
		    cout<<"(SYSTEM) : Invalid Key!";
			studport1();
			break;		
	}
}
studport()
{
	char chostud;
			cout<<"\n\t\t\t\t\t\t*** STUDENT PORTAL ***"<<endl;
	
	cout<<"\n\n\t\t[G] = Student Grades \t[P] = Student Profile \t[M] = Main";
	cout<<"\n\n\t\tChoose : ";
	cin>>chostud;
	
	switch(chostud)
	{
		case 'g':
			system("CLS");
			studport1();
		break;
		case 'p':
		    system("CLS");
			studprofile();
		break;	
		case 'm':
		    system("CLS");
			success();		
		break;	
			default:
			system("CLS");
		    cout<<"(SYSTEM) : Invalid Key!";
			studport();
			break;		
				
	}
}
studemod()
{
	
}
success()
{
	char choose;
	count = 1;
	cout<<"\n\t\t\t\t\t*** Welcome to ReportGen Access v.1 ***"<<endl;
	 cout<<"\n\n\tLOGIN SUCCESS!\n"<<"\n\tHello\t"<<user<<"!"<<"\tChoose To Execute"<<endl;
	
	cout<<"\n\n\t[V] = Admin's Module \t[A] = Admissions Office  [L] = Log Out\n";
	cout<<"\n\t[M] = Teacher's Module \t[S] = Student Portal     [D] = Student's Module";
	cout<<"\n\n\tChoose : ";
	cin>>choose;
	
	switch(choose)
	{
		case 'v':
			system("CLS");
			profile();
		break;
		case 'a':
			system("CLS");
			cout<<"\n\t\t\t\t\t\t*** ADMISSIONS OFFICE ***"<<endl;
		break;
		case 'l':
			system("CLS");
			logout();
		break;
		case 'm':
			system("CLS");
			cout<<"\n\t\t\t\t\t\t*** TEACHER'S MODULE ***"<<endl;
			tmodule();
		break;	
		case 's':
			system("CLS");
			studport();
		break;	
		case 'd':
		    system("CLS");
			cout<<"\n\t\t\t\t\t\t*** TEACHER'S MODULE ***"<<endl;
		break;		
		default:
		    system("CLS");
			cout<<"\n\tInvalid Key!\n\n"<<endl;	
		    success();
			break;	
		
	}
}
main()
{ 
        
        int count;
        char c;
        int i = 0;
        
        
        	if(fail>=3)
        {
        
        	system("CLS");
        
        	cout<<"\n\t\t(SYSTEM) : Multiple Attempts! Please ReRun The Program!";
        	return 0;
		}
        
        
		system("color 3f");
	    cout<<"\n\t\t\t\t\t*** Welcome to ReportGen Access v.1 ***"<<endl;
        cout<<"\n\n\t\t\t\t\tPlease Enter Valid Account"<<endl;
        cout<<"\n\t\t\t\t\tUSERNAME : ";
        cin>>user;
        
        cout<<"\n\t\t\t\t\tPASSWORD : ";
        c = _getch();
            
        while(c != 13)
        {
        	pass.push_back(c);
        	cout<<'*';
            c = _getch();
		}
        
        ifstream input("survey.txt");
        
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
        	    system("CLS");
               
                success();
                cin.get();
                cin.get();
                
        }
        else
        {
        	  
        	    system("CLS");
                cout<<"\n\t(System) : LOGIN ERROR!\n\tPlease check your Username and Password!\n";
                main();
                   fail++;
        }
        
}




 

	
	

	
	
	
	

