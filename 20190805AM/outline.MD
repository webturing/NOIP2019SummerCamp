# 数学：数论、排列组合
by zj@webturing.com

## 数学知识
- 进制和多项式
- 整除和因子/最大公约数和最小公倍数
- 素数和筛法
- 同余和模算术
- 全排列和组合数（模）



### 数论基础
- 数和进制
  - Definition  $k$进制($k \geq 2$)数: $b_n,b_{n-1}....b_2b_1b_0$ （$b_n \neq 0$）每一位满足$0 \leq b_i \leq k-1$
    是$k$的$n$次多项式 $$b_n k^n+b_{n-1} k^{n-1}+....+b_1 k + b_0$$
  - Algorithm计算n长度 $ \lceil{\log_k ^n}\rceil$
  - Algorithm计算最后一位n%k /奇偶性 n%2 
  - Algorithm计算第一位（方法 字符串/循环/数学方法）?
  - Algorithm计算各位数之和（逆转）
- 整除：合数和素数
  - Definition整除 如果整数 c,d,k 满足 $d=ck$ 称 $c$是$d$的因子，称c可以整除 d 记：$ c\mid d$ 否则记做$c\nmid d$
  - Lemma :如果 $c\mid a,c\mid b$ 则有 $c\mid a \pm b$  ,$c\mid (a\mod b)$, $c\mid ab$, 特别的 $c^2\mid ab$
  
  - Lemma2: 如果 $c|d$  则有$\frac{d}{c}\mid d$
  - Lemma3: 自然数$n$的所有正因子数不超过 $\sqrt n $ 对
  - Lemma4: 平方数有奇数个因子（反之亦然）
  - Definition素数: 整数$n$ 只有平凡因子$ 1,n$则称$n$为素数primer（质数）通常记$p$ 
  - Definition合数: 整数$n$至少还有一个非平凡因子则称$n$是合数
- 整数唯一分解定理
  - Definition 质数无限序列 $p_1=2, p_2=3, p_3=5, 7, 11, 13, 17, 19,..., 61, 67, 71, 73, 79, 83, 89, 97.....$
  - Theorem唯一分解定理: 任何自然数n都可以对应唯一的非负序列 $k_1,k_2,....k_m$ 满足$n={p_1}^{k_1}{p_2}^{k_2}...{p_m}^{k_m}$ 
- 所有因子计算：
  - Algorithm暴力枚举1 $O(n)$
  - Algorithm优化枚举2 $O(\sqrt n)$
  - Algorithm 利用整数的分解定理  $d(n)=(k_1+1)(k_2+1)....(k_n+1)$
### 公约数和公倍数
- Definition 最大公约数

  - 如果$c\mid a,c\mid b$ 称$c$是$a,b$的公因子（约数）( Common Divisor) 

  - $a,b$最大的公因子(约数)(Greatest Common Divisor)  记做$gcd(a,b)$

  - Algorithm 欧几里得算法：$gcd(a,b)$

     ```c++
      T gcd(T a,T b){
        if(b==0) return a;
        return gcd(b,a%b);
      }
     ```

  - Algorithm ??计算N个数的最大公约数

- Definition 最小公倍数

  - 如果$c\mid a,d\mid a$ 称$a$是$c,d$的公倍数( Common Multiplier) 
  - a,b所有公约数中最小的称为最小公倍数(Least  Common Multiplier)  记做$lcm(a,b)$
  - Algorithm 计算两个数的最小公倍数
  - Algorithm 计算多个数的最小公倍数?

- Lemma:$gcd(a,b) * lcm(a,b)= a b$

  
### 模算术（快速幂）
 - Definition 模运算（同余）

    - $$(a \pm b)\% M=(a\% M \pm b\% M)\% M$$
    - $(ab)\% M=(a\% M) (b\%M)\%M$

 - Definition 幂 $a^n=a^{n-1}  a$

 - Algorithm 快速幂（二分算法） $O(\log_2^n)$

      ```c++
      const int M=1e9+7;
      int mpower(int a,int b){
           a%=M;
           if(b==0||a==1)return 1;
           if(a==0||b==1)return a;
           if(b%2==0) return mpower(a*a%M,b/2);
           return (mpower(a*a%M,b/2)*a)%M;
      }
      ```
### Lemma素数性质
- 素数只有两个平凡因子1,n, 不含任何非平凡因子
- Lemma 有无限多个素数
- Lemma 不考虑顺序，任何整数都可以唯一分解为质数的乘积（唯一分解定理）

### 素数判定
### Algorithm判定

判断$n$是否是质数

- $ O(n) $ ：枚举$ 2,3....n-1$
- $O(\sqrt n)$ 枚举 $2,3....\sqrt n$
- $O(\frac{\sqrt n}{2})=O(n)$ 偶数特判，只枚举$3,5,7...,\sqrt n$
### Algorithm埃拉托斯筛法(sieve of Eratosthenes )
- 基本思想
    - 空间换时间
    - 预处理$(O(n \log \log n)$
    - 判定 $O(1)$
    - 所需要的空间往往比较大(1e6左右，空间压缩)
- 基本筛法
    ```c++
    int maxn=100000;
    int vis[maxn]; 
    ll init_prim(ll n){
        ll num=0;
        memset(vis,0,sizeof(vis));
        for(ll i=2; i<=n; i++)    {
            if(!vis[i]) {
                num++;
                for(ll j=i*i; j<=n; j+=i) {
                    vis[j]=1;
                }
            }
        }
    }
    ```

- 筛法应用和优化变形
  - 压缩空间 
  - 存储所有素数
  - 区间筛法

  ### Definition排列:

    - 部分排列:从n个不同的元素中选择m个元素的排列方案数为$P(m,n)=n(n-1)(n-2)...(n-m+1)$ 
    - 全排列$P(n,n)=n(n-1)(n-2)...2*1$ 记做$n!$

  ### Definition组合

    - 从n个不同的元素中选择r个元素的方案: $\binom{n}{r}$也记做$C_n^r$

      $C_n^r=\binom{n}{r}=\frac{n(n-1)(n-2)...(n-r+1)}{r(r-1)...1}=\frac{n!}{r!(n-r)!}$

    - 组合公式:

      - $C_n^r=C_n^{n-r}$
      - $C_n^r=C_{n-1}^{r-1}+C_{n-1}^{r}$

  ### Definition二项展开式（杨辉三角）

    - $(a+b)^n=\sum_{i=0}^{n}C_n^i a^i b^{n-i}$
    - 令$a=1,b=1$ 可得  $2^n= \sum_{i=0}^{n}C_n^i$ 

  ### 计数方法

    - 加法公式/乘法公式：
    - 容斥原理：
        - $|A \cup B|=|A|+|B|-|A \cap B|$
        - $|A\cup B\cup C|=|A|+|B|+|C|-|A\cap B|-|A\cap C|-|B \cap C|+|A\cap B\cap C|$
        - $|\cap_{i=1}^{n}A_i|=...$
    - 递推：
          - 计算$F_n$和$F_{n-1}$的关系

  ## 常用组合计算

  ### Algorithm阶乘$n!$
  - 计算$n!$精确值
      - $n\leq12$  int/unsigned int
      - $n\leq20$  long long/unsigned long long
      - else 模拟高精度计算 
  - 计算$n!$的长度 :对数/斯特林公式 $n!\approx \sqrt{2 \pi n}(\frac{n}{e})^n$
  - 计算$n!$的后k位 :模算术
  - 计算$n!$的前k位 :字符串/近似计算
  - 计算$n!$的最后一位（非零数) 
  ###  组合数

  - 计算$C_n^r$精确 $r= {\lceil \frac{n}{2} \rceil}$时$C_{n}^{r}$最大（一般用unsigned long long 存储)或者高精度计算 
  - 计算$C_n^r$的长度 
  - 计算$C_n^r$的后k位 :模算术 逆元
  - 利用记忆化数组

  ### 斐波那契（Fibonacci）$F_n=F_{n-1}+F_{n-2}$

  - 计算$F_n$精确值
  - 计算$F_n$的长度 
  - 计算$F_n$模 K,K较小 可以打表求周期
  - 利用记忆化数组
  - 矩阵快速幂

  ### 卡特兰数

  - 括号方案
  - 出栈种类
## 问题

### 连续和

- 难度 3
- 题目分析
- 算法复杂度:  
- 知识点:

### 孪生素数

- 难度 2
- 题目分析
- 算法复杂度:  
- 知识点:

### gcd

- 难度 3
- 题目分析
- 算法复杂度:  
- 知识点:

### 区间质数统计(加强版)
- 难度 4
- 题目分析
- 算法复杂度:  
- 知识点:

### n!长度

- 难度 2
- 题目分析
- 算法复杂度:  
- 知识点:

### n!因子、最后一个非0数
- 难度 4
- 题目分析
- 算法复杂度:  
- 知识点:

- 

## 练习
> 1311,1833,1184,2852,2517
