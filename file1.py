def board_panel(board):
    print(board[0],"|",board[1],"|",board[2])
    print("-","|","-","|","-")
    print(board[3],"|",board[4],"|",board[5])
    print("-","|","-","|","-")
    print(board[6],"|",board[7],"|",board[8])
board = [" "," "," "," "," "," "," "," "," "]

def pos_placement(pos,tile):
    if pos==1:
        board[0] = tile
        print(board_panel(board))
    if pos==2:
        board[1] = tile
        print(board_panel(board))
    if pos==3:
        board[2] = tile
        print(board_panel(board))
    if pos==4:
        board[3] = tile
        print(board_panel(board))
    if pos==5:
        board[4] = tile
        print(board_panel(board))
    if pos==6:
        board[5] = tile
        print(board_panel(board))
    if pos==7:
        board[6] = tile
        print(board_panel(board))
    if pos==8:
        board[7] = tile
        print(board_panel(board))
    if pos==9:
        board[8] = tile
        print(board_panel(board))

print(board_panel(board))

count = 0
while(count<5):
    print("Player1: ")
    position = int(input("Which position do you chooose"))
    turn = "X"
    print(pos_placement(position,turn))
    count+=1
    print("Player2 :")
    position = int(input("Which position do you choose"))
    turn = "O"
    print(pos_placement(position,turn))
    count+=1

    continue

if( count == 5 ):

    if board[0] == board[1] == board[2] == "X":
        print("player1 has won!")
    if board[0] == board[1] == board[2] == "O":
        print("player2 has won!")
    if board[3] == board[4] == board[5] == "X":
        print("player1 has won!")
    if board[3] == board[4] == board[5] == "O":
        print("player2 has won!")
    if board[6] == board[7] == board[8] == "X":
        print("player1 has won!")
    if board[6] == board[7] == board[8] == "O":
        print("player2 has won!")
    if board[0] == board[3] == board[6] == "X":
        print("player1 has won!")
    if board[0] == board[3] == board[6] == "O":
        print("player2 has won!")
    if board[1] == board[4] == board[7] == "X":
        print("player1 has won!")
    if board[1] == board[4] == board[7] == "O":
        print("player2 has won!")
    if board[2] == board[5] == board[8] == "X":
        print("player1 has won!")
    if board[2] == board[5] == board[8] == "O":
        print("player2 has won!")
    if board[0] == board[4] == board[8] == "X":
        print("player1 has won!")
    if board[0] == board[4] == board[8] == "O":
        print("player2 has won!")
    if board[2] == board[4] == board[6] == "X":
        print("player1 has won!")
    if board[2] == board[4] == board[6] == "O":
        print("player2 has won!")