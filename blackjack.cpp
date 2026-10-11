#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int drawCard(){
   int card = rand()%13+1;
   if (card == 1) return 11;
     if (card == 1) {
  cout << "Ace";
  return 11;
  } 
 else  if (card == 11){
      cout<< "Jack";
      return 10;
  }
   else if (card == 12){
      cout<< "Queen";
      return 10;
  }
   else  if (card == 13){
      cout<< "King";
      return 10;
  }
  else{
      cout << card;
      return card;
  }
   
}

int main(){
    //Seed random number generator
    srand(time(0));
    
    int total = 0;
    string choice;
    cout << "== SASE BlackJack =="<<endl;
    
    //Draw two cards
    
    cout << "\n Your first card: ";
    total += drawCard(); 
    cout<<"\n Your second card: ";
    total += drawCard();
    
    cout <<"\n Your total:" << total<<endl;
    
    while (total < 21) {
        cout << "\nHit or Stand? ";
        cin >> choice;

        if (choice == "Hit" || choice == "hit") {
            cout << "\nYour next card: ";
            total += drawCard();

            cout << "\nYour total: " << total << endl;
        }
        else if (choice == "Stand" || choice == "stand") {
            cout << "\nYou chose to Stand." << endl;
            cout << "Final total: " << total << endl;
            break;
        }
        else {
            cout << "Please enter Hit or Stand." << endl;
        }
    }

    // Check if player went over or reached 21
    if (total == 21) {
        cout << "\nBlackjack!" << endl;
    }
    else if (total > 21) {
        cout << "\nBUST!" << endl;
    }

    return 0;
}
    
    