#finding the sum of AP
try:
    n=int(input('provide the nth number:'))

except:
    print('invalid entry')

else:
    sum=0
    for i in range(1,n+1):
        sum+=i
    print(sum)
