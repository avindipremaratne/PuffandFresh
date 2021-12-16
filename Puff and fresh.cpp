#include <iostream>
#include<fstream>
#include<string>
#include<stdlib.h>
#include <cstring>
#include <conio.h>
 using namespace std;
 class showMenu1//Defining a class to show the menu
{
public:
    void ShowMenu()//creating a function named ShowMenu
    {
std::string line;
ifstream file("menu.txt");//using ifstream to read and display the menu list from a file
 if(file.is_open())
    {
        while(getline(file,line))
        {
            std::cout<<line<<'\n';
        }file.close();
    } else
    std:: cout<<"Erorr!\n";
    std:: cin.get();
    }
};

 class Loginform//creating a class named loginform
{
public:
    void Loginform1()//creating a function named loginform1
    {
START:
//user login form which is displayed in the system
    system("color B");//adding system colour
    string adminu = "admin"; //Declaring two variables to store username and password
    string adminp = "123";

    string adminu1;//Declaring another two variables to store user's input to username and password
    string adminp1;

    cout << "Username:\n";
    cin >> adminu1;//user entering username
    cout << "Password:\n";
    cin >> adminp1;//user have to enter password and after that it assign it to theadminp1 varible

    if((adminu1==adminu)&&(adminp==adminp1))//Checks whether the username and password are correct
    {
    	cout<<"User valid\n";//if the login details are correct it displays"User valid"
    }else
    {
    	cout<<"Invalid Login\n";//when login details are wrong it goes back again to the begining
    	goto START;
    }

    system("cls");//Clears the system
    }
};

class Getdata1//creating a class named Getdata1
{
public:
    void Getdata()//creating function named Getdata
    {
        ofstream file ("invoice.txt");//openting and naming the  text file to write the user's ordered items to the bill
    if(!file.is_open())
    {
    cout << "Unable to open the file\n";
    }else
    {
    //Writing the heading to the invoice text file
   file << "====================================================================\n";
   file << "                    ***Welcome to Puff and Fresh***\n";
   file << "                     ***Breakfast Billing System***\n";
   file << "====================================================================\n";
   file << "\n";
   file << "Amount                          Item                          Price\n";
   file << "\n";


    int *pointer = NULL;//Declaring dynamically allocated array based on user's input using pointers
    cout << "How many items you are going to enter"<<endl;
    int input;//Declaring a variavle to input user's amount of items going to order to create an array
    cin >> input;//taking he user's input and assigning it to the input variable

    pointer = new int[input];

    int temp, qty;//declaring two interger variables temp to input item code and qty to input quantity

	double C111 = 0;//declaring ten double type variables to input calculations for each item selected by user
	double C112 = 0;
	double C113 = 0;
	double C114 = 0;
	double C115 = 0;
 	double C116 = 0;
	double C117 = 0;
	double C118 = 0;
	double C119 = 0;
	double C120 = 0;

	double total;//declaring double type variable named total
    double tax;//declaring double type variable named tax
    double amountdue;
    for(int counter =0; counter < input ; counter++)

    {
        cout << "Enter the Item code "<<counter+1<<endl;
        cin >> temp;//user's input is assigned to the temp variable
        cout << "\n";
        cout << "Enter Quantity " << endl;
        cin >> qty;//user's input is assigned to the temp variable
        cout << "\n";
        *(pointer+counter) =  temp;

        switch(temp)//Using switch case statement to do the calculations based on user's input
        {
        case 111://switch case statement for the first item to calculate if the user has ordered it
            C111 = qty*65.00;//calculating the total
            file <<"" <<qty;//writing the quantity to the bill
            file << "                          String Hoppers                     Rs." << C111 <<endl;//writing the item name and price after calculating to the file
            file << "\n";

            cout << "String Hoppers\n";//displaying the item name
            cout << "Amount is Rs." <<C111 <<endl;//displaying the amount
            cout << "\n";
            break;

            case 112://switch case statement for the second item to calculate if the user has ordered it
            C112 = qty*45.00;//calculating the total
            file << "" << qty;//writing the quantity to the bill
            file << "                          Egg Sandwich                       Rs." << C112 <<endl;//writing the item name and price after calculating to the file
            file << "\n";

            cout << "Egg Sandwich\n";//displaying the item name
            cout << "Amount is Rs." <<C112 <<endl;//displaying the amount
            cout << "\n";
            break;

            case 113:
            C113 = qty*28.00;
            file << "" << qty;
            file << "                          Thosai and Chutney                 Rs." << C113 <<endl;
            file << "\n";

            cout << "Thosai and Chutney\n";
            cout << "Amount is Rs." <<C113 <<endl;
            cout << "\n";
            break;

            case 114:
            C114 = qty*25.50;
            file << "" << qty;
            file << "                          Parata                             Rs." << C114 <<endl;
            file << "\n";

            cout << "Parata\n";
            cout << "Amount is Rs." <<C114 <<endl;
            cout << "\n";
            break;

            case 115:
            C115 = qty*40.00;
            file << "" << qty;
            file << "                          Sausage Bun                        Rs." << C115 <<endl;
            file << "\n";

            cout << "Sausage Bun;\n";
            cout << "Amount is Rs." <<C115 <<endl;
            cout << "\n";
            break;

            case 116:
            C116 = qty*35.00;
            file << "" << qty;
            file << "                          Fish Roll                          Rs." << C116 <<endl;
            file << "\n";

            cout << "Fish Roll\n";
            cout << "Amount is Rs." <<C116 <<endl;
            cout << "\n";
            break;

            case 117:
            C117 = qty*10.00;
            file << "" << qty;
            file << "                          Plain Tea                          Rs." << C117 <<endl;
            file << "\n";

            cout << "Plain Tea\n";
            cout << "Amount is Rs." <<C117 <<endl;
            cout << "\n";
            break;

            case 118:
            C118 = qty*15.00;
            file << "" << qty;
            file << "                          Coffee                             Rs." << C118 <<endl;
            file << "\n";

            cout << "Coffee\n";
            cout << "Amount is Rs." <<C118 <<endl;
            cout << "\n";
            break;

            case 119:
            C119 = qty*20.00;
            file << "" << qty;
            file << "                          Tea                                Rs." << C119 <<endl;
            file << "\n";

            cout << "Tea\n";
            cout << "Amount is Rs." <<C119 <<endl;
            cout << "\n";
            break;

            case 120:
            C120 = qty*20.50;
            file << "" << qty;
            file << "                          Fruit Juice                        Rs." << C120 <<endl;
            file << "\n";

            cout << "Fruit Juice\n";
            cout << "Amount is Rs." <<C120 <<endl;
            cout << "\n";
            break;

            default : cout <<"Error!!\n";

            }

    }
        total = (C111 + C112 + C113 + C114 + C115 + C116 + C117 + C118 + C119 + C120);//Calculating the total amount
        tax = (total * 0.05);//Calculating the tax
        amountdue = (total + tax);//Adding the tax to the total
        	file << "\n";
            file << "Sub Total                                                     Rs."<< total <<endl;//writing the total amount to the text file as the bill
            file << "Tax                                                           Rs."<< tax << endl;//writing the tax to the text file as the bill
            file << "Amount Due                                                    Rs."<< amountdue <<endl;
    }

    }
};

class printCheck1//Defining a class to show the bill which was wriiten before Getdata function
{
public:
    void printCheck()//Declaring a function named printCheck
    {
        ifstream file;// Using ifstream to open the bill
        file.open("invoice.txt");//giving the name of the text file to open
        if(!file.is_open()){
        cout << "error while opening the file";//if the file isn't available it displays error while opening file

}else
{

string line;
while(file.good()){
getline(file,line);
cout << line <<endl;
}
}

    }
};


     class Search// Defining a class name Search
{
public://declaring the scope
    void Search1()//creating a function named Search1
    {
SEARCH:
    struct menuItemType//Declaring a sruct named menuItemType
{

    int   itemno;// Declaring integer type variable named itemno
   char  menuItem[100];//Declaring character type variable named menuItem
   char  price[50];

};

{
    int input;//Declaring an interger type variable to input user's item code

   cout << "Please enter item code to search\n";
    cin >> input;
    cout << "\n";
    if(input==111)
    {
        struct menuItemType Item1;        // Declare Item1 of type menuItemType

   // Item 1 specification
   Item1.itemno = 111;
   strcpy( Item1.menuItem, "String Hoppers");
   strcpy( Item1.price, "Rs.65.00");

cout <<Item1.itemno << endl;
cout <<Item1.menuItem << endl;
cout <<Item1.price << endl;

    }else if (input==112)//If the user hasn't input item1 code then checking if the user has input item 2 code

    {
        struct menuItemType Item2;        // Declare Item2 of type menuItemType

   // Item2 specification
   Item2.itemno = 112;
   strcpy( Item2.menuItem, "Egg Sandwich");
   strcpy( Item2.price, "Rs.45.00");

cout <<Item2.itemno << endl;
cout <<Item2.menuItem << endl;
cout <<Item2.price << endl;

    }else if(input==113)
    {
        struct menuItemType Item3;

    Item3.itemno = 113;
   strcpy( Item3.menuItem, "Thosai with Chutney");
   strcpy( Item3.price, "Rs.28.50");

cout <<Item3.itemno << endl;
cout <<Item3.menuItem << endl;
cout <<Item3.price << endl;

    }else if(input==114)
    {
        struct menuItemType Item4;

    Item4.itemno = 114;
   strcpy( Item4.menuItem, "Parata");
   strcpy( Item4.price, "Rs.20.50");

cout <<Item4.itemno << endl;
cout <<Item4.menuItem << endl;
cout <<Item4.price << endl;

    }else if(input==115)
    {
        struct menuItemType Item5;

   Item5.itemno = 115;
   strcpy( Item5.menuItem, "String Hoppers");
   strcpy( Item5.price, "Rs.40.00");

cout <<Item5.itemno << endl;
cout <<Item5.menuItem << endl;
cout <<Item5.price << endl;

    }else if(input==116)
    {
        struct menuItemType Item6;

    Item6.itemno = 116;
   strcpy( Item6.menuItem, "Fish Roll");
   strcpy( Item6.price, "Rs.35.00");

cout <<Item6.itemno << endl;
cout <<Item6.menuItem << endl;
cout <<Item6.price << endl;

    }else if(input==117)
    {
        struct menuItemType Item7;

    Item7.itemno = 117;
   strcpy( Item7.menuItem, "Plain Tea");
   strcpy( Item7.price, "Rs.10.00");

cout <<Item7.itemno << endl;
cout <<Item7.menuItem << endl;
cout <<Item7.price << endl;

    }else if(input==118)

    {
        struct menuItemType Item8;

    Item8.itemno = 118;
   strcpy( Item8.menuItem, "Coffee");
   strcpy( Item8.price, "Rs.15.00");

cout <<Item8.itemno << endl;
cout <<Item8.menuItem << endl;
cout <<Item8.price << endl;

    }else if(input==119)
    {
        struct menuItemType Item9;

    Item9.itemno = 119;
   strcpy( Item9.menuItem, "Tea");
   strcpy( Item9.price, "Rs.20.00");

cout <<Item9.itemno << endl;
cout <<Item9.menuItem << endl;
cout <<Item9.price << endl;

    }else if(input==120)
    {
    struct menuItemType Item10;

   Item10.itemno = 120;
   strcpy( Item10.menuItem, "Fruit Juice");
   strcpy( Item10.price, "Rs.22.50");

cout <<Item10.itemno << endl;
cout <<Item10.menuItem << endl;
cout <<Item10.price << endl;

    }else//if the user has input a wrong item no. to search
    {
        cout << "Error!! Item not found\n" <<endl;
        goto SEARCH;//going back again to the enter th item no. again
    }

    }
};
};

void exit()//creating a void for to exit the program
   {
	char input;  //define input
	cout<<"Do you want to exit?\nIf you want to exit please press 'E' again\nIf you don't want to exit press any key without 'E'"<<endl;
	cin>>input;  //take the user input to the variable input for confirmation
	if(input=='E')  //if the user input is 'E', exit from the program
	{
	 exit(NULL);
	}
}
int main()
{
//displaying the program heading
cout << "\n";
cout <<"                                   =========================================\n";
cout <<"                                        ***Welcome to Puff and Fresh***\n";
cout <<"                                        ***Breakfast Billing System***\n";
cout <<"                                   ==========================================\n";
cout << "\n";
cout << "\n";

cout << "PLEASE ENTER LOGIN DETAILS BELOW\n";
cout << "\n";

Loginform a;//creating an object instace to display the loginform in the system
a.Loginform1();
cout << "\n";

cout << "PLEASE SELECT AND ENTER ONE OF THE OPTIONS BELOW TO PROCEED\n";
cout << "\n";

int choice;//declaring a variable named choice to select options for the user

cout << "           [1]       BREAKFAST MENU\n";//Displaying the options for the user to select
cout << "           [2]       MAKE AN ORDER\n";
cout << "           [3]       SEARCH AN ITEM\n";
cout << "           [4]       EXIT\n";

cin >> choice;//taking the user;s input and assigning it to the variable
system("cls");
if (choice==1)//If the user has selected option 1 the statements that the system has to execute
    {
        showMenu1 b;//display the menu by creatinng an object instance
        b.ShowMenu();
        cout <<"\n";


        Getdata1 c;//creatinng an object instance to get the data
        c.Getdata();
        cout <<"\n";


        printCheck1 d;//creatinng an object instance to print and display the bill
        d.printCheck();
        cout << "\n";


    }else if (choice==2)//If the user has selected option 2 the statements that the system has to execut

    {
        Getdata1 c;//creatinng an object instance to display Getdata
        c.Getdata();
        cout <<"\n";

        printCheck1 d;
        d.printCheck();
        cout << "\n";
    }else if (choice==3)//If the user has selected option 3 the statements that the system has to execute
    {
        Search e;//Creating an object instance to display search menu
        e.Search1();
        cout << "\n";

    }else if(choice==4)//If the user has selected option 4 the statements that the system has to execute

    {
        system("color C");
        exit();//displaying the exit
        system("cls");
        main();//If the user didn't input "E", the system comes back to the begining
    }else
    {
        cout << "Error\n";
    }
return 0;

}



