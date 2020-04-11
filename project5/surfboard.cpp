#include <iostream>
#include <iomanip>

using namespace std;

void ShowUsage(){
  cout << "******************************************************************\n";
  cout << "***** Welcome to my Johnny Utah's PointBreak Surf shop *****\n";
  cout << "******************************************************************\n";
  cout << "To show program usage 'S'" << endl;
  cout << "To purchase a surfboard press 'P'" << endl;
  cout << "To display current purchases press 'C'" << endl;
  cout << "To display total amount due press 'T'" << endl;
  cout << "To quit the program press 'Q'" << endl;
}

void MakePurchase(int& iTotalSmall, int& iTotalMedium, int& iTotalLarge){
  char type;
  int quantity = 0;
  cout << "Please enter the quanity the type (S=small, M=medium, L=large) of surfboard you would to purchase: ";
  cin >> quantity >> type;
  if (type == 's' || type == 'S'){
    iTotalSmall = quantity + iTotalSmall;
  }
  else if (type == 'm' || type == 'M'){
    iTotalMedium = quantity + iTotalMedium;
  }
  else if (type == 'l' || type == 'L'){
    iTotalLarge =quantity + iTotalLarge;
  }
  else{
    cout << "invalid entry";
  }
}

void DisplayPurchase(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge){
  if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0){
    cout << "No purchase made yet.";
  }
  if (iTotalSmall > 0 ){
    cout << "The total number of small surfboards is " << iTotalSmall << endl;
  }
  if (iTotalMedium > 0){
    cout << "The total number of medium surfboards is " << iTotalMedium << endl;
  }
  if (iTotalLarge > 0){
    cout << "The total number of large surfboard is " << iTotalLarge << endl;
  }

}

void DisplayTotal(const int iTotalSmall, const int iTotalMedium, const int iTotalLarge){
    cout<<fixed <<setprecision(2);
    float total, small = 175, medium = 190, large = 200;
    if (iTotalSmall == 0 && iTotalMedium == 0 && iTotalLarge == 0){
    cout << "No purchase made yet." << endl;
    }
    if (iTotalSmall > 0){
      cout << "The total number of small surfboards is " << iTotalSmall << " at total of $" << small*iTotalSmall << endl;
    }
    if (iTotalMedium > 0){
      cout << "The total number of medium surfboards is " << iTotalMedium << " at total of $" << medium*iTotalMedium << endl; 
    }
    if (iTotalLarge > 0){
      cout << "The total number of large surfboards is " << iTotalLarge << " at total of $" << large*iTotalLarge << endl;
    }
    total = large*iTotalLarge + medium*iTotalMedium + small*iTotalSmall;

    cout << "Amount due: $" << total;
}

int main() {
  int iTotalSmall = 0, iTotalMedium = 0, iTotalLarge = 0;
  char select;
  cout << "******************************************************************\n";
  cout << "***** Welcome to my Johnny Utah's PointBreak Surf shop *****\n";
  cout << "******************************************************************\n";
  cout << "To show program usage 'S'" << endl;
  cout << "To purchase a surfboard press 'P'" << endl;
  cout << "To display current purchases press 'C'" << endl;
  cout << "To display total amount due press 'T'" << endl;
  cout << "To quit the program press 'Q'" << endl;
  
  do{
    cout << "\n\nPlease enter selection: "; cin >> select;
    switch (select){
      case 's':
      case 'S':
      ShowUsage();
      break;
      case 'p':
      case 'P':
      MakePurchase(iTotalSmall, iTotalMedium, iTotalLarge);
      break;
      case 'c':
      case 'C':
      DisplayPurchase(iTotalSmall, iTotalMedium, iTotalLarge);
      break;
      case 't':
      case 'T':
      DisplayTotal(iTotalSmall, iTotalMedium, iTotalLarge);
      break;
      case 'q':
      case 'Q':
      cout << "Thank You";
      break;
      default:
      cout << "Invalid entry, please select again";
      break;
    }
  }while (select != 'q');


}
