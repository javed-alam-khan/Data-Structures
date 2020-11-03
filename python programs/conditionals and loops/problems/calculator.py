import sys
choice = int(input())
while(choice):
    if(choice == 1):
        a = int(input())
        b = int(input())
        print(a + b)
    elif(choice == 2):
        a = int(input())
        b = int(input())
        print(a - b)
    elif(choice == 3):
        a = int(input())
        b = int(input())
        print(a * b)
    elif(choice == 4):
        a = int(input())
        b = int(input())
        print(a // b)
    elif(choice == 5):
        a = int(input())
        b = int(input())
        print(a % b)
    elif(choice == 6):
        sys.exit()
    else:
        print("Invalid Operation")
    choice = int(input())