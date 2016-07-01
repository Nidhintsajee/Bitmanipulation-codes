#program to read two numbers A and N (0 <= N <= 31);print back the decimal value formed by the least significant N bits of A 
#part2, question m)
A=input("Enter decimal no :")
N=input("Enter nth bit (0 <= N <= 31):")
print(str((-~(N<<1)) & A)+" is the last "+str(N)+"th significant bit decimal no of "+str(A))
