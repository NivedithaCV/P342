#factorial
val=input('Enter a number:')
f=1
try:
    n=int(val)
    if n<0:
        print('negative no!')
        raise Exception
except Exception:
    print('invalid entry')

else:
    if n==0:
        print('The factorial is 1')
    else:
        while n>0:
            f=f*n
            n-=1
        print('The factorial is', float(f))
