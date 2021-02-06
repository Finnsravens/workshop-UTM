#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

    int main()
    {

        int kuso=0,NumberOfTickets=0;
        char gender;
        double price = 0,total=0;
        double TotalMaleTicketPrice=0,TotalFemaleTicketPrice=0;


        cout << "Welcome to Cinema " << endl;
        for(int i = 1;i<=2;i++)
        {

            do
        {
          cout << endl << "Please Enter ( 1 ) For an Adult or Enter ( 2 ) For Kid, Thank You : ";
          cin  >> kuso;

          if(kuso == 1)
          {
              cout << "Please Enter ( M ) for Male Or Enter ( F ) for Female : ";
              cin  >> gender;
              switch (gender)
              {
          case 'M' :
          case 'm' :
                cout << "Please Enter The Number Of Tickets : ";
                cin  >> NumberOfTickets;
                price = NumberOfTickets * 15.00;
                cout << "The Price For Tickets is RM " <<setprecision(2)<<fixed<<price<<endl;
                TotalMaleTicketPrice +=price;
                break;


          case 'F':
          case 'f':
                cout << "Please Enter The Number Of Tickets : ";
                cin  >> NumberOfTickets;
                price = NumberOfTickets * 13.00;
                TotalFemaleTicketPrice+=price;
                cout << "The Price For Tickets is RM " <<setprecision(2)<<fixed<<price<<endl;
                break;


          default :
              cout << "It's an Invalid Option";
              break;
              }


          }
          else if(kuso == 2)
          {
              cout << "Please Enter ( B ) for Boy Or Enter ( G ) for Girl : ";
              cin  >> gender;
              switch (gender)
              {
          case 'B' :
          case 'b' :
                cout << "Please Enter The Number Of Tickets : ";
                cin  >> NumberOfTickets;
                price = NumberOfTickets * 10.00;
                cout << "The Price For Tickets is RM " <<setprecision(2)<<fixed<<price<<endl;
                break;


          case 'G':
          case 'g':
                cout << "Please Enter The Number Of Tickets : ";
                cin  >> NumberOfTickets;
                price = NumberOfTickets * 8.00;
                cout << "The Price For Tickets is RM " <<setprecision(2)<<fixed<<price<<endl;
                break;


              default :
              cout << "It's an Invalid Option";
              break;
              }
          }
          else
          {
              cout << "Sorry Invalid Option\n";
          }
        }while(kuso!=1 && kuso !=2);


        }
        
          return 0;
        }
