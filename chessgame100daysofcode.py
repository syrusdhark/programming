r1=[' ',' ',' ']
r2=[' ',' ',' ']
r3=[' ',' ',' ']
def print_rows(row1,row2,row3):
    print(row1)
    print(row2)
    print(row3)

def add_to_pos(ro,po):
    ro[po]='x'

num= int(input("enter the position"))

pos=num//10
n=num%10

if(n==1):
    add_to_pos(r1, pos-1)
    print_rows(r1, r2, r3)
elif(n==2):
    add_to_pos(r2, pos-1)
    print_rows(r1, r2, r3)
elif(n==3):
    add_to_pos(r3, pos-1)
    print_rows(r1, r2, r3)
