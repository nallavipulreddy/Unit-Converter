#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;
struct book 
{
	char name[10];
	int idno;
	int price;
	int pages;
}p[10];
void index();
void kilometer();
void meter();
void centimeter();
void mile();
void foot();
void kilograms();
void grams();
void celsius();
void fahrenheit();
int main()
{
	char key;
	int i,a,n,h,total;	
		index();
getch();
}
int y;
void index ()
	{
		char choice;
		char key[10];
	    system("cls");	
	    cout<<"\n\n\n\n\t\t\t CHOSEE THE UNIT YOU WANT TO CONVERT";
	    cout<<"\n\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
	    cout<<"\n\n\t\t\t 1) KILOMETER";
	    cout<<"\n\t\t\t 2) METER";
	    cout<<"\n\t\t\t 3) CENTIMETER";
	    cout<<"\n\t\t\t 4) MILE";
	    cout<<"\n\t\t\t 5) FOOT";
		cout<<"\n\t\t\t 6) KILOGRAM";
		cout<<"\n\t\t\t 7) GRAMS";
		cout<<"\n\t\t\t 8) CELSIUS";
		cout<<"\n\t\t\t 9) FAHRENHEIT";
		cout<<"\n\t\t\t e) EXIT";
		cout<<"\n\n\n\n\n\t\t\t\t Enter your choice:";
		choice=getche();
		switch(choice)
		{
		
			case '1':
				system("cls");
				kilometer();
				break;
			case '2':
				system("cls");
				meter();
				break;
		    case '3':
				system("cls");
				centimeter();
				break;
			case '4':
				system("cls");
				mile();
				break;
			case '5':
				system("cls");
				foot();
				break;
			case '6':
				system("cls");
				kilograms();	
			break;
			case '7':
				system("cls");
				grams();
			break;
			case '8':
				system("cls");
				celsius();
				break;
			case '9':
				system("cls");
				fahrenheit();
				break;
			case 'e':
				cout<<"\n\t\t\t TIME TO EXIT";
				break;		
			default:
				cout<<"\n\n INVALID OPTION ";
				
				
 		}
	}
void kilometer()
{
	ofstream o("record.txt",ios::app);
	float value,meter,centimeter,mile,foot;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	meter=(1000*value);
	centimeter=value/100000;
	mile=value/1.6;
	foot=value/0.000305;
	cout<<"\n"<<value<<" kilometers ="<<meter<<" meters ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" kilometers ="<<centimeter<<" centimeters ";
	cout<<"\n-------------------------------------------------------------------";
	cout<<"\n"<<value<<" kilometers ="<<mile<<" miles ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" kilometers ="<<foot<<" Feets ";
	getch(); 
	//storing this in a file for future use
	o<<"\n kilometers="<<value<<"\t meters ="<<meter<<"\t centimeter ="<<centimeter<<"\t mile ="<<mile<<"\t feets ="<<foot;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index(); 	
}
void meter()
{
	ofstream o("record.txt",ios::app);
	float value,kilometer,centimeter,mile,foot;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	kilometer=(value/1000);
	centimeter=value/100;
	mile=kilometer/1.6;
	foot=kilometer/0.000305;
	cout<<"\n"<<value<<" meters ="<<kilometer<<" kilometers ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" meters ="<<centimeter<<" centimeters ";
	cout<<"\n-------------------------------------------------------------------";
	cout<<"\n"<<value<<" meters ="<<mile<<" miles ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" meters ="<<foot<<" Feets ";
	getch(); 
	//storing this in a file for future use
	o<<"\n meters="<<value<<"\t kilometers ="<<kilometer<<"\t centimeter ="<<centimeter<<"\t mile ="<<mile<<"\t feets ="<<foot;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void centimeter()
{
	ofstream o("record.txt",ios::app);
	float value,kilometer,meter,mile,foot;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	kilometer=(value*100000);
	meter=value*100;
	mile=kilometer/1.6;
	foot=kilometer/0.000305;
	cout<<"\n"<<value<<" centimeters ="<<kilometer<<" kilometers ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" centimeters ="<<meter<<" meters ";
	cout<<"\n-------------------------------------------------------------------";
	cout<<"\n"<<value<<" centimeters ="<<mile<<" miles ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" centimeters ="<<foot<<" Feets ";
	getch(); 
	//storing this in a file for future use
	o<<"\n centimeters="<<value<<"\t meters ="<<meter<<"\t kilometer ="<<kilometer<<"\t mile ="<<mile<<"\t feets ="<<foot;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void mile()
{
	ofstream o("record.txt",ios::app);
	float value,kilometer,centimeter,meter,foot;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	kilometer=(value*1.6);
	centimeter=kilometer/100000;
	meter=kilometer/1000;
	foot=kilometer/0.000305;
	cout<<"\n"<<value<<" miles ="<<kilometer<<" kilometers ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" miles ="<<centimeter<<" centimeters ";
	cout<<"\n-------------------------------------------------------------------";
	cout<<"\n"<<value<<" miles ="<<meter<<" meters ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" miles ="<<foot<<" Feets ";
	getch(); 
	//storing this in a file for future use
	o<<"\n miles="<<value<<"\t meters ="<<meter<<"\t centimeter ="<<centimeter<<"\t kilometers ="<<kilometer<<"\t feets ="<<foot;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void foot()
{
	ofstream o("record.txt",ios::app);
	float value,kilometer,centimeter,mile,meter;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	kilometer=value*0.000305;
	centimeter=kilometer/100000;
	mile=kilometer/1.6;
	meter=kilometer/1000;
	cout<<"\n"<<value<<" feets ="<<kilometer<<" kilometers ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" feets ="<<centimeter<<" centimeters ";
	cout<<"\n-------------------------------------------------------------------";
	cout<<"\n"<<value<<" feets ="<<mile<<" miles ";
	cout<<"\n-------------------------------------------------------------------"; 
	cout<<"\n"<<value<<" feets ="<<meter<<" meters ";
	getch(); 
	//storing this in a file for future use
	o<<"\n feetss:"<<value<<"\t meters:"<<meter<<"\t centimeter:"<<centimeter<<"\t mile:"<<mile<<"\t kilometers:"<<kilometer;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void kilograms()
{
	ofstream o("record.txt",ios::app);
	float value,gram;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	gram=value/1000;
	cout<<"\n"<<value<<" Kilogram ="<<gram<<" grams ";
	//storing this in a file for future use
	o<<"\n kilograms:"<<value<<"\t grams:"<<gram;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void grams()
{
	ofstream o("record.txt",ios::app);
	float value,kilogram;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	kilogram=value*1000;
	cout<<"\n"<<value<<" grams ="<<kilogram<<" kilograms ";
	//storing this in a file for future use
	o<<"\n grams:"<<value<<"\t kilograms:"<<kilogram;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void celsius()
{
	ofstream o("record.txt",ios::app);
	float value,fahrenheit;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	fahrenheit=value*1.8+32;
	cout<<"\n"<<value<<" celsius ="<<fahrenheit<<" fahrenheit ";
	//storing this in a file for future use
	o<<"\n celsius:"<<value<<"\t fahrenheit:"<<fahrenheit;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}
void fahrenheit()
{
	ofstream o("record.txt",ios::app);
	float value,celsius;
	cout<<"\n ENTER THE UNIT TO CONVERT:";
	cin>>value;
	celsius=(value-32)*(5/9);
	cout<<"\n"<<value<<" fahrenheit ="<<celsius<<" celsius ";
	//storing this in a file for future use
	o<<"\n fahrenheit:"<<value<<"\t celsius:"<<celsius;
	o<<"\n ---------------------------------------------------------------------";
	o.close();
	getch();
	index();
}

