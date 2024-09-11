#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
char getcomputermove(){
    int move;
    srand(time(NULL));
    move=rand()%3;
    if(move==0){
        return'p';



    }
    else if(move==1){
        return's';

    }
    return'r';


}
int getresult(char playermove,char computermove){
    

    if(playermove==computermove){
        return 0;
    }
    if(playermove=='s'&&computermove=='p'){
        return 1;

    }
       if(playermove=='s'&&computermove=='r'){
        return 1;}
    if(playermove=='p'&&computermove=='r'){
        return -1;}
        if(playermove=='p'&&computermove=='s'){
        return 1;}
        if(playermove=='r'&&computermove=='p'){
        return -1;}
        if(playermove=='r'&&computermove=='p'){
        return -1;}
        if(playermove=='r'&&computermove=='s'){
        return 1;}
    
 return 0;

}
int main(){
    char playermove;
    cout<<"\n\n\n\t\t\twelcome to stne papeer scissor""game\n";
    cout<<"\n\t\tenter r for rock,p for paper,s for scissor\n\t\t\t\t\t";

while(1){
    cin>>playermove;
    if(playermove=='p'||playermove=='r'||playermove=='s'){
        break;
    }
    else{
        cout<<"\t\t\tinvalid player move"<<endl;
    }
}
char computermove=getcomputermove();
 int result=getresult(playermove,computermove);
if (result == 0) { 
        cout << "\n\t\t\tGame Draw!\n"; 
    } 
    else if (result == 1) { 
        cout << "\n\t\t\tCongratulations! Player won the "
                "game!\n"; 
    } 
    else { 
        cout << "\n\t\t\tOh! Computer won the game!\n"; 
    } 
  
    // showing both  moves 
    cout << "\t\t\tYour Move: " << playermove << endl; 
    cout << "\t\t\tComputer's Move: " << computermove << endl; 
  
    return 0; 
}



