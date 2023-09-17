#include <iostream>

using namespace std;


    void xo(char arr[])
    {
        
        
    cout<<"  "<<arr[0];cout<<"  |  ";cout<<arr[1];cout<<"  |  ";cout<<arr[2]<<endl;
                    cout<<"-----|";cout<<"-----|-----"<<endl;
    cout<<"  "<<arr[3];cout<<"  |  ";cout<<arr[4];cout<<"  |  ";cout<<arr[5]<<endl;
                    cout<<"-----|";cout<<"-----|-----"<<endl;
    cout<<"  "<<arr[6];cout<<"  |  ";cout<<arr[7];cout<<"  |  ";cout<<arr[8]<<endl;
    }
int main()
{
    char arr[9]={'1','2','3','4','5','6','7','8','9'};
    
    string turn;
    xo(arr);
    cout<<"player 1 turn: ";cin>>turn;
    cout<<"\n";
    int pos = stoi(turn);
    
    arr[pos-1]='x';
    
    xo(arr);
    
    int pos = stoi(turn);
    cout<<"player 2 turn: ";cin>>turn;
    
    arr[pos-1]='o';
    
    xo(arr);
    return 0;
}