#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

string turn;

    void xo(char arr[])
    {
        
        
    cout<<"  "<<arr[0];cout<<"  |  ";cout<<arr[1];cout<<"  |  ";cout<<arr[2]<<endl;
                    cout<<"-----|";cout<<"-----|-----"<<endl;
    cout<<"  "<<arr[3];cout<<"  |  ";cout<<arr[4];cout<<"  |  ";cout<<arr[5]<<endl;
                    cout<<"-----|";cout<<"-----|-----"<<endl;
    cout<<"  "<<arr[6];cout<<"  |  ";cout<<arr[7];cout<<"  |  ";cout<<arr[8]<<endl;
    }
    
    
    void ask_turn(char arr[],int no)
    {
        int pos;
        if(no%2==0){
        
        cout<<"player 2 turn: ";cin>>turn;
        cout<<"\n";
        pos = stoi(turn);
        arr[pos-1]='o';
        xo(arr);

        }
        
        else if(no%2!=0)
        {
        cout<<"player 1 turn: ";cin>>turn;
        cout<<"\n";
        pos = stoi(turn);
        arr[pos-1]='x';
        xo(arr);

        }
        
        
    }
    
int main()
{
    srand((unsigned) time(0));
    
    int no= 1+(rand()%2);
    
    cout<<"Let's see who starts the game"<<endl;
    cout<<no<<endl;
    cout<<"Oh its "<<no<<"'s turn"<<endl;
    
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    
    xo(arr);
    
    int count_x=0;
    int count_y=0;
    
    
    bool t=true;
    
    while(t==true)
    {
        ask_turn(arr,no);
        no++;
        
        if(no==8){t=false;}
        
        getch();
        
    }
    
    for(int i=0;i<10;i++){   if(arr[i]=='x'){count_x++;}
                                  else if(arr[i]=='o'){count_y++;}    }
    
         if(count_x==3){cout<<"player 1 wins";}
         else if (count_y==3){cout<<"player 2 wins";}
    
    return 0;
}
