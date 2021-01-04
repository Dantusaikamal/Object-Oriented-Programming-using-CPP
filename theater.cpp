//OOPS assignment: Q3
#include <iostream>

using namespace std;

//Function for different screens:
// void logic() {
//   cout << "Screen1\n";
// }
int i;
int main()
{
    int ch,s[i],num,last;
    char row;
    cout<<"Welcome to CSE B theater.\n";
    cout<<"-------------------------------------------------------\n";
    cout<<"|Enter 1 if you wish to watch 'V' movie.              |\n";
    cout<<"|Enter 2 if you wish to watch 'Chemical hearts' movie.|\n";
    cout<<"|Enter 3 if you wish to watch 'Utopia' movie.         |\n";
    cout<<"|Enter 4 if you wish to watch 'Shakuntala Devi' movie.|\n";
    cout<<"-------------------------------------------------------\n";   

    cin>>ch;
    switch(ch) {
  case 1:
    cout<<"Thanks for selecting 'V' the movie. 'V' movie is available in Screen 1. Please select the seating arrangement.";
    break;
  case 2:
    cout<<"Thanks for selecting 'Chemical hearts' the movie. 'Chemical hearts' movie is available in Screen 2. Please select the seating arrangement.";
    break;
  case 3:
    cout<<"Thanks for selecting 'Utopia' the movie. 'Utopia' movie is available in Screen 3. Please select the seating arrangement.";
    break;
  case 4:
    cout<<"Thanks for selecting 'Shakuntala Devi' the movie. 'Shakuntala Devi' movie is available in Screen 4. Please select the seating arrangement.";
 
  default:
    cout<<"Incorrect movie";
}

cout<<"Seating arrangement:\n";
cout<<"Please select the Row of your choice. (Rows A-Z are available)\n";
cin>>row;
cout<<"How many seats do you want?\n";
cin>>num;
cout<<"Thank you for selecting "<<num<< " seats. Please select the seats of your choice.\n";
cout<<"Please note that according to the guidelines of Indian Govt, Seating adjacent is prohibited. Book seats of alternate position.\n";

 for(int i=0;i<=num;i++)
 {
     cin>>s[i];
 
    //  if(s[i + 1] - s[i] == 1) {
    //   cout<<"Sorry, adjacent seat can not be selected. Try again!";
    //  }
    //  else
      for (i=0;i<=num;i++)
  	   {
          cout << "Your seats are: "<<row<< s[i] << endl;
  	   }
 
 }
    return 0;
}




