n=int(input())
binary = str(bin(n))[2:]

power = 1
for i in range(len(binary)-1,-1,-1):
    if(binary[i] != '1'):
        power = power * 2
    else:
        break

print(power)

