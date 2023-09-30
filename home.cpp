#include<iostream>
#include<windows.h>
#include<fstream>
#include<conio.h>
using namespace std;
class homeClass{
	public:
		char tempAsk;
		char select;
		string SerialNo, ItemName;
		int priceofItem;
    public:
	void insertInventory();
	void inventoryPrice();
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
void intro(){
	SetConsoleTextAttribute(h,11);
	Sleep(2000);
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
    cout<<"\t\t\t==        ==    ==========    ==             ==========      =========      ==         ==    ========= "<<endl;Sleep(70);
    cout<<"\t\t\t==        ==    ==            ==             ==             ==       ==     == =     = ==    ==        "<<endl;Sleep(70);
    cout<<"\t\t\t==        ==    ==            ==             ==             ==       ==     ==   =  =  ==    ==        "<<endl;Sleep(70);
    cout<<"\t\t\t==    =   ==    =======       ==             ==             ==       ==     ==         ==    =======   "<<endl;Sleep(70);
    cout<<"\t\t\t==  =  =  ==    ==            ==             ==             ==       ==     ==         ==    ==        "<<endl;Sleep(70);
    cout<<"\t\t\t== =    = ==    ==            ==             ==             ==       ==     ==         ==    ==        "<<endl;Sleep(70);
    cout<<"\t\t\t==        ==    ==========    ==========     ==========      =========      ==         ==    ========= "<<endl;Sleep(70);
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
    SetConsoleTextAttribute(h,11);
     cout<<"\t\t\t                                                 TO                                                   "<<endl;Sleep(70); 
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	cout<<"\t\t\t==========================================|< HOTEL TECH RAA >|======================================== "<<endl;Sleep(70); 
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	    cout<<"\t\t\t";
	    SetConsoleTextAttribute(h,1);
	    for(int i=1; i<=102; i++){
	    	cout<<"|";
	    	Sleep(20);
		}
		SetConsoleTextAttribute(h,4);
	cout<<"\n\n\t\t\t\t\t\t\t";
	cout<<"|";Sleep(60);
	cout<<"<";Sleep(60);
	cout<<"-";Sleep(60);
	cout<<"- ";Sleep(60);
	cout<<"W";Sleep(60);
    cout<<"E";Sleep(60);
    cout<<"L";Sleep(60);
	cout<<"C";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"M";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<" T";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"C";Sleep(60);
	cout<<"H";Sleep(60);
	cout<<" ";Sleep(60);
	cout<<"R";Sleep(60);
	cout<<"A";Sleep(60);
	cout<<"T";Sleep(60);
	cout<<" !";Sleep(60);
	cout<<" -";Sleep(60);
	cout<<"-";Sleep(60);	
	cout<<">";Sleep(60);
	cout<<"|";Sleep(60);
	getch();
    




}

void menu(){
	SetConsoleTextAttribute(h,11);
	system("CLS");
	cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	cout<<"\t\t\t==========================================|< HOTEL TECH RAA >|======================================== "<<endl;Sleep(70); 
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
    SetConsoleTextAttribute(h,2);
cout<<"\t\t\t------------------------------------------------------------------------------------------------------ "<<endl;Sleep(100);	
cout<<"\t\t\t|        [CREATE BILL | 1 | ]       -    [INVENTORY PRICE | 2 | ]    -    [INSERT INVENTORY | 3 | ]  | "<<endl;Sleep(100);
cout<<"\t\t\t------------------------------------------------------------------------------------------------------ "<<endl;Sleep(100);	
cout<<"\t\t\t|        [CUSTOMER DETAILS | 4 | ]  -    [DELET CUSTOMER  | 5 | ]    -    [DELETE INVENTORY | 6 | ]  | "<<endl;Sleep(100);
cout<<"\t\t\t------------------------------------------------------------------------------------------------------ "<<endl;Sleep(100);		
cout<<"\t\t\t|                                           CLOSE SOFTWARE |X|                                       | "<<endl;Sleep(100);			
cout<<"\t\t\t------------------------------------------------------------------------------------------------------ "<<endl;Sleep(70);
	cout<<"\n\n\t\t\t|---------------------------> ";Sleep(60);
	cout<<"E";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<"T";Sleep(60);
	cout<<"E";Sleep(60);
    cout<<"R";Sleep(60);
    cout<<" ";Sleep(60);
	cout<<"Y";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"U";Sleep(60);
	cout<<"R";Sleep(60);
	cout<<" O";Sleep(60);
	cout<<"P";Sleep(60);
	cout<<"T";Sleep(60);
	cout<<"I";Sleep(60);
	cout<<"O";Sleep(60);
	cout<<"N";Sleep(60);
	cout<<" : ";Sleep(60);
	cin>>select;
	
	
	switch(select){
		case '2' :
			inventoryPrice();
			getch();
			menu();
			break;
		case '3':
			do
			{
				insertInventory();
				cout<<"|******************> Add more Item [Y/N] : ";
				cin>>tempAsk;
			} while (tempAsk=='Y' || tempAsk == 'y');
			getch();
			menu();
			break; 
		case 'x':
			exit(0);
			break;
		case 'X':
			exit(0);
			break;
		
		default: 
			system("CLS");
			SetConsoleTextAttribute(h,4);
			cout<<"|--------------------------------> SORRY ! INVALIDE OPTION !";
			getch();
			menu();
	}
}

};


int main()
{
homeClass home;
home.intro();
home.menu();


return 0;
}//@rajendra_chimala




void homeClass:: insertInventory(){

	SetConsoleTextAttribute(h,11);
	system("CLS");
	cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	cout<<"\t\t\t==========================================|< HOTEL TECH RAA >|======================================== "<<endl;Sleep(70); 
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	
cout<<"\n\n\n\t\t\t======================================================================================================== "<<endl;Sleep(70);
	cout<<"\t\t\t==========================================|< INSERT INVENTORY >|======================================== "<<endl;Sleep(70); 
    cout<<"\t\t\t======================================================================================================== "<<endl;Sleep(70);

	ofstream file;

	if (!file)
	{
		cout<<"|-----------------------> File Not found !";
	}else{
		cout<<"\n\n\t\t\t|+++++++++++++++> ENTER INVENTORY SERIAL NO : ";
		cin>>SerialNo;
		cout<<"\t\t\t    |***************> ENTER ITEM NAME : ";
		cin.ignore();
		cin>>ItemName;
		cout<<"\t\t\t    |**************> ENTER ITEM PRICE :";
		cin>>priceofItem;
		file.open("inventory.txt", ios::in|ios::app);

		file<<SerialNo<<"  "<<ItemName<<"  "<<priceofItem<<"\n";
		file.close();

	}
	


}



void homeClass::inventoryPrice(){
	SetConsoleTextAttribute(h,11);

	system("CLS");
	cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	cout<<"\t\t\t==========================================|< HOTEL TECH RAA >|======================================== "<<endl;Sleep(70); 
    cout<<"\t\t\t====================================================================================================== "<<endl;Sleep(70);
	
cout<<"\n\n\n\t\t\t======================================================================================================== "<<endl;Sleep(70);
	cout<<"\t\t\t==========================================|< INVENTORY PRICE >|========================================= "<<endl;Sleep(70); 
    cout<<"\t\t\t======================================================================================================== "<<endl;Sleep(70);

	ifstream file;

	if (!file)
	{
		cout<<"|-----------------------> File Not found !";
	}

	file.open("inventory.txt", ios::out);
	SetConsoleTextAttribute(h,4);
	string line;
	int totalItem;
	while(getline(file,line)){
		cout<<"\t\t\t"<<line<<endl;
		totalItem++;
	}
	 if(totalItem==0){

    if( file.tellg() == -1){
    cout<<"\n\t\t\t NO RECORD FOUND !";
    }
   }

}
