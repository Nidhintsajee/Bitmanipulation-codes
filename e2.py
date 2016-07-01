#program to read two integers: A and N from the keyboard.The program should print value of N'th bit of A, part2 question g)
A=input("Enter binary number:")
N=input("Enter nth bit:")
print("Value at "+str(N)+"th bit : "+str((A >> N) & 1))

