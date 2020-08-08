#finding sum of HP
i=1
sum=0.0
while True:
    if (1/i)==0.001:
        print('stopped at as sum increase by', 1/i)
        break
    else:
        sum=sum+(1/i)
        i=i+1
print(sum)
