![image](https://user-images.githubusercontent.com/98099819/174420335-2beee42d-9678-45e2-9122-1f6f92b1932c.png)
![image](https://user-images.githubusercontent.com/98099819/174420503-7d27df3c-c74d-4895-bb7d-5ccca6fe3a08.png)
![image](https://user-images.githubusercontent.com/98099819/174420513-24b2dca7-4565-4882-a2bf-f8c8741e4380.png)
 
 描述数据结构的一个很好的方法：
![image](https://user-images.githubusercontent.com/98099819/174420600-36ede3c6-5744-4748-a84c-4a7e16e19379.png)

![image](https://user-images.githubusercontent.com/98099819/174420660-35134b5b-e429-452c-a56e-3e2726b22edf.png)

“a是矩阵元素的值”这个值是什么值，在抽象数据类型的描述中是不关心的。
相应地，当需要对它的元素值进行操作的时候，返回的是通用的ElementType（元素类型），在实现与这个矩阵相关的所有函数时，在头上写一个define（定义），需要什么就可以define什么，这样实现的函数和矩阵元素到底是哪种类型是没有关系的，哪种类型都可以做运算的，避免例如从int又变成double的情况，就不用重新写一个double了。
![image](https://user-images.githubusercontent.com/98099819/174420735-fec56898-cfa6-476f-bd32-30b9d1469f43.png)

这个在抽象数据类型定义的时候，都是不关心的（只关心要实现一个矩阵）

![image](https://user-images.githubusercontent.com/98099819/174420751-1bc69d73-5e75-4599-8812-e1a5da9c301d.png)

这个也不管，这也就是所谓的“抽象”。
