for i in range(122, 333):
    j = str(2*i)
    k = str(3*i)
    i = str(i)
    a = {i[0], i[1], i[2], j[0], j[1], j[2], k[0], k[1], k[2]}  # 集合去重复
    if len(a) == 9 and ("0" not in a):  # 注意含0的情况，我就在这被坑了
        print(int(i), int(j), int(k))
