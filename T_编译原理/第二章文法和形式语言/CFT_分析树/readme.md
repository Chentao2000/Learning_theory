# 编译原理 ： 首先你要搞懂这编译原理的乱七八糟的语言表达式 
```
在文法贵重的推导过程中 ，并不是严格的按照从上到下的文法规则顺序（小白自学容易犯错）
他是根据你语言的需要，想选哪个文法规则就选哪个文法规则
所以构成的分析数也是多种多样的 
```
![1653612538(1)](https://user-images.githubusercontent.com/68007558/170606749-6453eb1e-3b39-4fbe-ad67-eb68946c37af.png)



文法 分析树 短语 直接短语 ：

直接短语就是一个表达式

-----

用中文就可以很好理解编译原理搞的这一套东西了

![1653613488(1)](https://user-images.githubusercontent.com/68007558/170608149-1b64c8f9-b3d5-4efc-98ea-8132919c7fd4.png)

----

## 二义性 ：一个文法对应多个句型 则称该文法是二义性文法
- 二义性是有害的 ，消除文法的二义性 要引入新的规则 ，即付出代价

![1653614269(1)](https://user-images.githubusercontent.com/68007558/170609253-5284ca3a-5c51-43bd-864c-4f8445dfb861.png)
