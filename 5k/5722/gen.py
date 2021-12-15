f = open(r'tabula.txt', 'w')
n = int(input())
i = 1
sum = 0
while i <= n+1:
    f.write('"')
    f.write(str(sum))
    f.write('", ')
    sum += i
    i += 1


f.close
