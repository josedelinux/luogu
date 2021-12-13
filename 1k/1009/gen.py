
# answer string Generator


f = open(r'point.txt', 'w')  # 存入文件
sum = 1
i = 2
last = 1
n = int(input())
while i <= n:
    last *= i
    sum += last
    i += 1  # 主函数
    f.write('"')  # 上引号
    f.write(str(sum))  # 具体值
    f.write('",')  # 下引号与逗号
f.close  # 关闭文件写入
