# 4.1_1 串的定义和基本操作
![在这里插入图片描述](https://img-blog.csdnimg.cn/e5642147d35e495db2609ecb6713f7ab.png)
## 1、串的定义
 - **子串：串中任意个连续的字符组成的子序列**
 - **主串：包含子串的串**
 - **字符在主串中的位置：字符在串中的序号**
 - **字串在主串中的位置：字串的第一个字符在主串中的位置**
 - **空串 != 空格串，空格串中的每个空格字符占1个字节，也就是8个比特位**
 - **串和线性表：串是一种特殊的线性表，数据元素之间呈线性关系**![在这里插入图片描述](https://img-blog.csdnimg.cn/554de2d81ba74bb0b2428d631fc50c00.png)
 ## 2、串的基本操作
 
![在这里插入图片描述](https://img-blog.csdnimg.cn/5ba7a8651dc848cea7dd4edee8fa43ab.png)
**用StrCompare(S, T)比较时，abandon<aboard，因为第三个字符"a"<"o" ,如果前缀与短串相同时，长串更大：abstract < abstraction**
## 3、字符集编码 
![在这里插入图片描述](https://img-blog.csdnimg.cn/d2bfaf3e993e44548a2c0fddfd23f524.png)

![在这里插入图片描述](https://img-blog.csdnimg.cn/c7d4f73604bd42f5ac3f497417f607db.png)
**先读高四位，再读第四位**

![在这里插入图片描述](https://img-blog.csdnimg.cn/0a7aac19dd224a6087c3a66a8ed03179.png)
## 3、知识回顾与重要考点
![在这里插入图片描述](https://img-blog.csdnimg.cn/b4eb4a5ba9fa46a68d33998e1afd2ec3.png)
# 4.1_2 串的存储结构
![在这里插入图片描述](https://img-blog.csdnimg.cn/56813f2597aa46eb93e1ebba4c3ed8d0.png)
**把线性表中的ElemType改成char**
## 1、串的顺序存储
**静态数组实现：**
![在这里插入图片描述](https://img-blog.csdnimg.cn/5a4fa2d1f1e84f50b79c0f7b7d62af1e.png)
**动态数组实现：**

![在这里插入图片描述](https://img-blog.csdnimg.cn/31a8d7a64cf4414aaa7a1ca9c0e09339.png)
**计算串的长度：**
![在这里插入图片描述](https://img-blog.csdnimg.cn/252b9bc757a44782b5d35a9414d2795d.png)
 - 方案一：字符的位序=数组下标+1
 - 方案二：字符的位序=数组下标，但ch[0]占1B，也就是8bit，只能表示0~255的数字范围
 - 方案三：最后放置\0，那么计算长度的时候，就要遍历到\0
 - 方案四：方案一和二的结合，从ch[1]开始访问
## 2、串的链式存储
![在这里插入图片描述](https://img-blog.csdnimg.cn/9ebdf030c54e4a12bda9d6b72b6b7b32.png)
 - **char占1B，指针占4B，故存储密度低（实际有用信息所占比例非常小）**
 - **解决方法：每个结点存多个字符**![在这里插入图片描述](https://img-blog.csdnimg.cn/ab0bf4f198e345f698a49e12cd25f7c7.png)某些地方存不满也可以用些特殊字符来存储，如*或\0
## 3、基本操作的实现
**求子串，用Sub返回串S的第pos个字符起长度为len的子串**

![在这里插入图片描述](https://img-blog.csdnimg.cn/018a8c9f365e4f3b9d01d6f87f0a0a38.png)
**比较两个串的大小：**
![在这里插入图片描述](https://img-blog.csdnimg.cn/0abf28145281436b99e8923e85cdd7fd.png)
**定位操作：**

![在这里插入图片描述](https://img-blog.csdnimg.cn/b7ba0895efa140d8b12e6b4fc9ae71e0.png)
## 3、知识回顾与重要考点
![在这里插入图片描述](https://img-blog.csdnimg.cn/a5def4fc49554f7590029874dbaf9dbd.png)
# 4.2_1 串的朴素模式匹配算法
![在这里插入图片描述](https://img-blog.csdnimg.cn/05239848a18d42c99af8dc144ff08e8e.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/3b27d93aa37c4c08ad421188b76f4583.png)












