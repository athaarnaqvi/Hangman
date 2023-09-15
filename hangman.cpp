#include<iostream>
#include<cstring>
#include<ctime>
#include <cstdlib>

using namespace std;
void hangman(int m){
//cout << "OOOOOOOOOO"<<endl;
switch(m){
case 1:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
break;
case 2:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
break;
case 3:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<" |   |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
break;
case 4:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<" |   |\n";
cout<<"/|   |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
break;
case 5:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<" |   |\n";
cout<<"/|\\  |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
break;
case 6:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<" |   |\n";
cout<<"/|\\  |\n";
cout<<" |   |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
break;
case 7:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<" |   |\n";
cout<<"/|\\  |\n";
cout<<" |   |\n";
cout<<"/    |\n";
cout<<"=========="<<endl;
break;
case 8:
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<" |   |\n";
cout<<" O   |\n";
cout<<" |   |\n";
cout<<"/|\\  |\n";
cout<<" |   |\n";
cout<<"/ \\  |\n";
cout<<"=========="<<endl;
cout<<"   X  X"<<endl;
cout<<"    __"<< endl;
break;
}

}
int main(){
char guess='\0';
int lives = 0;
int guesscheck = 0;
bool isguess = false;
  srand(time(0));

string words[10]={"programming", "hangman", "games","abyss","jijitsu","documents","repository","internship","summers","headphones"};
cout<<"-----WELCOME TO THE HANGMEN GAME-----"<<endl;
cout<<"=========="<<endl;
cout<<" +---+\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"     |\n";
cout<<"=========="<<endl;
for(int i=0; i<10; i++){
  char option = '\0';
 string temp = words[rand()%10];
 int wordlength = 0;
 int c = 0;
 int a = 0;
 while(temp[c]!= '\0'){
 wordlength ++;
 c++;
 }
 
 const int dashlen = wordlength;
 char dash[dashlen];

 for(int j = 0; j < wordlength ; j++){
 
 dash[j]='_';
 }
 for(int j = 0; j < wordlength ; j++){
 cout<<dash[j]<<" ";
 }
 cout<<endl;
 //////////////////////////////////////////////////////////////////////////////////////
 for(int k = 0; k < 50 ; k ++){
 cout<<endl;
  cin >> guess;
  cout<<endl;
  
     while(temp[a]!='\0'){
     if(guess == temp[a]){
    
         dash[a] = guess;
           guesscheck += 1;
           isguess = true;
            
        
         
     }
     
         a++;
     }
     
     if(isguess == false){
      lives++;
     	hangman(lives);
      

     		if(lives==8){
     			for(int j = 0; j < wordlength ; j++){
          cout<<temp[j]<<" ";}
     			break;
     			}
        else{
          for(int j = 0; j < wordlength ; j++){
          cout<<dash[j]<<" ";}
      cout<<endl;
        }
     }
     else if(guesscheck == wordlength){
       for(int j = 0; j < wordlength ; j++){
          cout<<dash[j]<<" ";}
      cout<<endl;
             cout<<" +    + "<<endl;
             cout<<"  |__|"<<endl;
             cout<<endl<<"Congratulations YOU GOT IT"<<endl;
             break;
     }
  else if(guesscheck != 0 && isguess == true){
    
    for(int j = 0; j < wordlength ; j++){
          cout<<dash[j]<<" ";}
          cout<<endl;
          }
  
  
  
   a = 0;
 isguess = false;
 }
 guesscheck = 0;
 lives = 0;
 //isguess=false;
 cout<<endl;
 cout<<"Do you want to play again y/n"<<endl;
 cin>>option;
  

 if(option == 'N' || option == 'n'){
  break;
 }
 
}
return 0;
}

