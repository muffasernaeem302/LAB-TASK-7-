#include <iostream>
#include <iomanip>
using namespace std;

int main()
{




//LAB ACTIVITY #1 :



//cout << " Multiplication Table" << endl;
//// Display the number title
//cout <<"    ";
//for (int j = 1; j <= 9; j++)
//cout << "   " << j;
//cout << "\n----------------------------------------"<<endl;
//// Display table body
//for (int i = 1; i <= 9; i++)
//{
//cout << i << " | ";
//for (int j = 1; j <= 9; j++)
//{
//// Display the product and align properly
//cout << setw(4)<< i * j;
//}
//cout << endl;
//}

 // LAB ACTIVITY 2 ://
// int sum = 0;
//int number = 0;
//while (number < 20)
//{
//number++;
//sum += number;
//if (sum >= 100)
//break;
//}
//cout << "The number is " << number << endl;
//cout << "The sum is " << sum << endl;

// LAB ACTIVITY 3 ://
//cout <<"//=========================//"<<endl;
//
//cin.clear();
//cin.ignore();
//
//int sum = 0;
//int number = 0;
//while (number < 20)
//{
//number++;
//if (number ==10 || number == 11)
//continue;
//sum += number;
//}
//cout << "The sum is " << sum << endl;
//




cout << "********************************************" << endl;
cout << "***     PROGRAMMING FUNDAMENTALS-LAB     ***" << endl;
cout << "***            LAB WEEK 7                ***" << endl;

cout << "***            FA25-BCS-167               ***" << endl;
cout << "***           MUFFASER NAEEM              ***" << endl;
cout << "********************************************" << endl;
int choice ;

do {
    cout << "\n===== MAIN MENU =====" << endl;
        cout << "1. Lab Task 1" << endl;
        cout << "2. Lab Task 2" << endl;
        cout << "3. Lab Task 3" << endl;
        cout << "4. Lab Task 4" << endl;
        cout << "5. Lab Task 5" << endl;
        cout << "6. Lab Task 6" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;


switch(choice ){


case 1:{

// LAB TASK 1:

int num ;
int evencount=0;
int oddcount=0 ;
int zerocount=0;
int totalcount =0;

while(true){
    cout <<" u entered integers ( quit when enter -999)"<<endl;
cin >>num;


if (num ==-999)

    break;
totalcount++;
    if (num==0)
        zerocount++;
    else if (num %2==0)
        evencount++;
    else
        oddcount++;
}
    cout <<" total integers are ="<< totalcount<<endl;
    cout <<" even integers are ="<<evencount<<endl;
    cout <<" odd integers are ="<<oddcount<<endl;
    cout <<" zero integers are = "<<zerocount<<endl;
}

case 2:{

 //LAB TASK 2 :

double grosssale;
double earning ;
double totalweeklyearning;

while (true){
    cout <<" enter the gross sale amount :(-1 to quit )="<<endl;
    cin >>grosssale;

    if ( grosssale== -1)
        break;

    earning = 200+(0.09 * grosssale );

    cout <<" weekly earning = "<< earning<<endl;

    totalweeklyearning += earning ;

}
    cout << " Total weekly earning are = "<< totalweeklyearning;

}
case 3 :{

// LAB TASK 3 :

int accountnumber ;
double beginningbalance ,totalcharges,totalcredits,creditlimit ;
double newbalance;

while (true){

    cout <<" enter the account number (or -1 to quit )"<<endl;
    cin >> accountnumber;

    if (accountnumber==-1)
        break;

    cout <<" beginning balance ="<<endl;
    cin >> beginningbalance;
    cout <<" total charges ="<<endl;
    cin >> totalcharges;
    cout <<" total credits ="<<endl;
    cin >> totalcredits;
    cout <<" credit limit ="<<endl;
    cin >> creditlimit;

    newbalance= beginningbalance+totalcharges-totalcredits;

    cout <<" new balance = "<< newbalance;

    if (newbalance>creditlimit){

        cout <<" account number=" <<accountnumber<<endl;
        cout <<" credit limit = "<<creditlimit;
        cout <<" new balance = " <<newbalance<<endl;

    }
}
}
case 4 :{

// LAB TASK 4 :


int N ;
char  choice ;
int zerocount ;
int num ;

do
{
    cout <<" enter the number of integers u want to enter :"<<endl;
    cin >>N ;

    zerocount =0;

    cout <<"input "<<N<<" integers :"<<endl;

    for (int i =1 ; i <=N ; i++ )
        {
        cin >>num;
    if (num == 0)
        zerocount++;
    }
    cout <<" # of zeros  are = "<<zerocount;

    cout <<" do you want to do another zero calculation (enter Y to continue and N to Quit )"<<endl;
    cin >>choice;
}while (choice == 'Y' || choice=='y');

cout << " Quit successfully "<<endl;


}
case 5 :{



// lab task 5:

int choice ;
char  repeat ;

do {

    cout <<" choose pattern to execute :"<<endl;
    cout <<" (1) pattern A "<<endl;
    cout <<" (2) pattern B "<<endl;
    cout <<" (3) pattern C "<<endl;
    cout <<" (4) pattern D " <<endl;
    cout <<" enter your choice (1,2,3,4)"<<endl;
    cin >> choice;

    int rows = 10 ;

  switch (choice){
  case 1 :
      for ( int i=1 ; i<=rows ; i++){
        for (int j = 1; j<=i ;j ++)
            cout <<" *" <<endl;
        cout << endl;

      }
      break;
  case 2 :
    for (int i=rows ; i>=1;i--){
        for (int j=1;j<=i;j++)
            cout <<"*"<<endl;
            cout <<endl;

    }
    break;
  case 3:
      for( int i= rows ; i >=1; i--){
        for (int s= 1 ;s<=rows-i;s++)
            cout <<" " <<endl;
        for (int j=1; j<=i; j++)
            cout <<"*"<<endl;
            cout <<endl;

      }
    break;
  case 4:
    for ( int i = 1 ; i<=rows ; i++){
        for (int s=1 ; s<=rows-i; s++)
            cout <<" " <<endl;
        for (int j = 1; j<=i ; j++)
            cout <<"*"<<endl;
        cout <<endl;

    }
    break;

    default:
    cout <<" invalid choice ! please enter between 1 - 4 "<<endl;
    break;
}

    cout <<" do u want to print another pattern ? (Y/N):"<<endl;
    cin >> repeat;
}
while (repeat== 'Y'|| repeat== 'y');

    cout << " program ended " <<endl;


  case 6 :{


// LAB TASK 6 ;


    int n;


    cout << "Enter integer between 1 to 9: ";
    cin >> n;

    while (n < 1 || n > 9) {
        cout << "Enter integer between 1 to 9: ";
        cin >> n;
    }


    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }

  }

}
}
}
 while (choice != 0);







    return 0;
}


































