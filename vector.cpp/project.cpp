#include<bits/stdc++.h>
using namespace std;
int main(){
    string player_name;
    cout<<"Enter Your Name : "<<endl;
    cin>>player_name;
    //system("cls");
    int rounds;
    cout<<player_name<<" how many rounds you want to play? : "<<endl;
    cin>>rounds;
    int player_score=0,computer_score=0;
    for(int round=1;round<=rounds;round++){
       // system("cls");
        int player_choice,computer_choice;
        cout<<"Round No : "<<round<<"/"<<rounds<<endl;
        cout<<player_name<<"'s score = "<<player_score<<endl;
        cout<<"Computer Score = "<<computer_score<<endl;
        cout<<"1.Rock"<<endl;
        cout<<"2.Paper"<<endl;
        cout<<"3.Scissors"<<endl;
        do{
            cout<<"Select Your Choice : "<<endl;
            cin>>player_choice;
        }while(player_choice!=1 && player_choice!=2 && player_choice!=3);

        if(player_choice==1 && computer_choice==3){
            cout<<"Player Win."<<endl;
            player_score++;
        }else if(player_choice==2 && computer_choice==1){
            cout<<"Player Win."<<endl;
            player_score++;
        }else if(player_choice==3 && computer_choice==2){
            cout<<"Player Win."<<endl;
            player_score++;
        }else if(player_choice==computer_choice){
            cout<<"Draw."<<endl;
        }else{
            cout<<"Computer Win."<<endl;
            computer_score++;
        }
    }
    if(computer_score==player_score){
        cout<<"Game is Drawn "<<endl;
    }else if(player_score>computer_score){
        cout<<player_name<<" You won the game."<<endl;
    }else{
        cout<<"Computer won the game."<<endl;
    }
    return 0;
}