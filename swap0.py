#program to read two numbers A and N (0 <= N <= 31);print back A (in decimal) with its Nth bit cleared to 0 and all other bits unchanged.
#part2, question l)
A=input("Enter decimal no :")
N=input("Enter nth bit (0 <= N <= 31):")
print("After bit swap with 0 the decimal no is:"+str(~(1<<N)&A))
