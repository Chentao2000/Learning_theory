## 2.3 单链表
## 2.3.1 单链表的定义
![在这里插入图片描述](https://img-blog.csdnimg.cn/8a737f5a3f05466d96f47c0209a0ad9e.png)
## **什么是单链表？**
![在这里插入图片描述](https://img-blog.csdnimg.cn/e6d9d6607ceb41e9a4a395cced12a2ab.png)
****typedef关键字**：数据类型重命名**
**typedef <数据类型> <别名>**
如：
 - typedef int zhengshu; 
 - typedef int *zhengshuzhizhen; 
 - 平时我们写的int x=1相当于zhengshu x=1； 
 - 平时我们写的int *p相当于zhengshuzhizhen p;
 
## **定义单链表**
 - **节点和结点的区别**，视频中应该写错了，在数据结构算法中应都为结点。节点呢，被认为是一个实体，有处理能力，比如，网络上的一台计算机；而结点则只是一个交叉点，像“结绳记事”，打个结，做个标记，仅此而已，还有就是，要记住：**一般算法中点的都是结点**。
 - **法一**：![在这里插入图片描述](https://img-blog.csdnimg.cn/2a58ba5c9c5f4807bc31f878ae0dd968.png)先struct定义结构体再用typedef重命名

 - **法二（最简单）**：![在这里插入图片描述](https://img-blog.csdnimg.cn/caa3be85d8fe45bf9dd8055af82b0115.png)这里直接同时用typedef和struct，把**单链表结点命名为LNode**，把**指向struct LNode的指针命名为*LinkList**；
 - struct LNode *是指向下一结点的指针，这里名字设为next；
 - 表示一个单链表时，只需声明一个**头指针L**
![在这里插入图片描述](https://img-blog.csdnimg.cn/29d292da4bc84afaa2bb394c8e950d33.png)

## **GetElem**：把链表L中第i个结点取出来并返回
![在这里插入图片描述](https://img-blog.csdnimg.cn/bf40df006bdb4811bac0202149931be4.png)

 - 因为要返回第i个结点，故要用LNode*来强调返回的是结点；
 - 又因为要从单链表中寻找第i个结点，故要后面的LinkList要强调这是一个单链表
 - **强调这是一个结点用LNode***
 - **强调这是一个单链表用LinkList**

## **初始化单链表**
  - **不带头结点时**![在这里插入图片描述](https://img-blog.csdnimg.cn/71967e6350f24d13948054c764fa9ca3.png)
 - **带头结点时**，在**初始化时会用malloc申请一片空间存头结点，并把地址赋给头指针L**，再把next指针设为NULL，头结点不存储数据
![在这里插入图片描述](https://img-blog.csdnimg.cn/ab2911eaf21143bf9d67fe7491da567b.png)**如果头结点之后暂时没有节点，即L->next = NULL，指向下一个指针为空，那么这个单链表就是空链表。**
 - 传入指针变量时传入的是&L，**带有引用&时**是修改头指针L；如果**不带引用&时**则是修改头指针L的复制品。
 - **不带头结点和带头节点的区别**
 ![在这里插入图片描述](https://img-blog.csdnimg.cn/c4acfcbe1da640c1923965a69cb181e8.png)
**不带头节点**：头指针L指向的下一结点就是实际用于存放数据的结点。
**带头节点**：**头指针L所指向的下一结点（头结点）是不存放实际的数据的，只有头结点的下一结点才存放数据**。
## 总结
![在这里插入图片描述](https://img-blog.csdnimg.cn/27a2f882b51d45888ba5a088aba7f2b3.png)


