# 1 枚举、模拟
by zj@webturing.com

## 算法设计思想

### 枚举法
枚举法是最基础最重要的解题算法， 基本思想是遍历解空间（多项式，指数，阶乘），注意优化
### 模拟法
模拟法是最基础最重要的实现算法，主要考察代码实现能力（推荐使用C++STL)，注意优化
### 构造法*
构造是按照题目要求，巧妙的构造出解，主要考察代码逻辑思维和总结归纳能力**
## 典型题分析

### 区间质数统计（入门版）[1311](http://acm.webturing.com/JudgeOnline/problem.php?id=1311)
- 难度 1
- 题目分析 ：
- 算法实现 $O(n*sqrt(n))$  或者 $O(n)$
- 知识点 ：枚举、素数判断O(sqrt(N))/筛法O(1)
- 算法优化*： 素数判断优化、循环优化、筛法优化等


###  6174 [2503](http://acm.webturing.com/JudgeOnline/problem.php?id=2503)
- 难度 1
- 题目分析
- 算法实现: O(1) (不超过10000次想想为什么)
- 知识点 :数字分拆、基础排序、循环

### 3n+1 [1253](http://acm.webturing.com/JudgeOnline/problem.php?id=1253)
- 难度 1
- 题目分析
- 算法实现:模拟 复杂度未知 个人猜测是O(logN)
- 知识点 ：模拟 注意计算范围 64位整数

### 扫雷 [1509](http://acm.webturing.com/JudgeOnline/problem.php?id=1509)
- 难度 2
- 题目分析
- 算法实现 O(8*N^2)
- 知识点 ：二位数组，图的8/4连通

### 约瑟夫问题 [1051](http://acm.webturing.com/JudgeOnline/problem.php?id=1051)
- 难度 2
- 题目分析
- 算法实现O(N)
- 知识点：链表，模拟链表,list

### 括号配对 [1204](http://acm.webturing.com/JudgeOnline/problem.php?id=1204)
- 难度 1
- 题目分析
- 算法实现O(N)
- 知识点:字符串 栈实现(stack)


###  本原勾股数 [2850](http://acm.webturing.com/JudgeOnline/problem.php?id=1079)
- 难度 2
- 题目分析
- 算法实现: O(N) n是组数 
- 知识点：数学、数论


###  奇数幻方 [1079](http://acm.webturing.com/JudgeOnline/problem.php?id=1079)
- 难度 3
- 题目分析： 注意行动不能越界
- 算法实现: 模拟O(N^2) 
- 知识点 ：二位数组，图的访问遍历

## 习题（例题+扩展)

> 上午练习：2850,1311,1035,1032,1509


## 知识小贴士


