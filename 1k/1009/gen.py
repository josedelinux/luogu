# answer string Generator

f = open(r'point.txt', 'w')  # 存入文件
f.write('"')  # 上引号
# factorial 0 = 1
f.write(str(1))  # 具体值
f.write('",')  # 下引号与逗号
sum = 1
i = 2
last = 1
n = int(input())
while i <= n:
    f.write('"')  # 上引号
    f.write(str(sum))  # 具体值
    f.write('",')  # 下引号与逗号
    last *= i
    sum += last
    i += 1  # 主函数

f.close  # 关闭文件写入
