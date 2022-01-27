/*
https://www.luogu.com.cn/blog/_post/24368

主要思路是，读如字符串后，判断字符串中是属于哪一种类型的数字。
一共有四种情况：正整数、正实数、正分数、正百分数。

如果是正整数，先反转，再去掉前导零，输出。
如果是百分数，先按正整数方案做，最后输出一个百分号。
如果是分数或者实数，以分数线 /
小数点为分界，将字符串分为左右两部分，分别进行反转。

综上，我们有以下几个问题需要解决：

如何反转？用 STL 中的 std::reverse()。
如何去掉前导零？先遍历一遍字符串，看看有多少前导零，然后 std::string::erase()
即可。 如何提取出子字符串？std::string::substr()。

对于以上三个函数不是很懂？没关系，文末会有具体解释。 还有两点需要注意，分别是：

但要注意，如果数字本身就是零，按照上面的做法会得到空串。所以需要特判。
还要注意，小数点之后的部分还需要去掉“后导零”。
*/

#include <algorithm>
#include <iostream>
#include <string>

//返回反转并去掉前导零之后的字符串
std::string reverse(std::string s) {
  int zeroCount = 0;
  std::reverse(s.begin(), s.end());
  // 范围 for 循环，用于统计前导零个数
  for (auto i : s) {
    if (i == '0')
      zeroCount++;
    else
      break;
  }
  s.erase(s.begin(), s.begin() + zeroCount);
  return (s != "" ? s : "0");  //特判
}

//用于去掉后导零
std::string deleteTail(std::string s) {
  int zeroCount = 0;
  for (int i = s.size() - 1; i >= 0; i--) {
    if (s[i] == '0')
      zeroCount++;
    else
      break;
  }
  s.erase(s.end() - zeroCount, s.end());
  return (s != "" ? s : "0");
}

int main() {
  std::string s;
  std::cin >> s;
  if (s.back() == '%') {
    std::cout << reverse(s.substr(0, s.size() - 1)) << "%" << std::endl;
    return 0;
  }

  //   for (auto i : s) {
  //     std::string left, right;
  //     // 其实还有一种不需要遍历字符串的做法，直接 find() 即可，但是当时没想到
  //     if (i == '/') {
  //       left = s.substr(0, s.find("/"));
  //       right = s.substr(s.find("/") + 1);
  //       std::cout << reverse(left) << "/" << reverse(right) << std::endl;
  //       return 0;
  //     }
  //     if (i == '.') {
  //       left = s.substr(0, s.find("."));
  //       right = s.substr(s.find(".") + 1);
  //       std::cout << reverse(left) << "." << deleteTail(reverse(right))
  //                 << std::endl;
  //       return 0;
  //     }
  //   }

  if (s.find("/") != std::string::npos) {
    int div = s.find("/");
    std::string left, right;
    left = s.substr(0, div);
    right = s.substr(div + 1);
    std::cout << reverse(left) << "/" << reverse(right) << std::endl;
    return 0;
  } else if (s.find(".") != std::string::npos) {
    int div = s.find(".");
    std::string left, right;
    left = s.substr(0, div);
    right = s.substr(div + 1);
    std::cout << reverse(left) << "." << deleteTail(reverse(right))
              << std::endl;
    return 0;
  }

  std::cout << reverse(s) << std::endl;
  return 0;
}
