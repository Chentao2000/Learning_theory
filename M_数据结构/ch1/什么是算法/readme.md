![在这里插入图片描述](https://img-blog.csdnimg.cn/25f8a159787d4528a17b28563fb81e54.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/5fd1a8d51e5f48ea8903b8375ae1b8b0.png)

看上去它非常像C语言的一个函数，但并不是C语言的函数
选择排序：从没有排好序的序列里面，每次选一个最小的放在子序列的最后，最后就能得到有序的序列
![在这里插入图片描述](https://img-blog.csdnimg.cn/7148e8ee97ca45cb915c48d680e0fa9d.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/84f749aa91a541c989c8e5a1cbc0a2c7.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/960968887a5b46c0be504d9a770b9b60.png)
循环实现，只用了一个for循环和一个临时变量，无论N多大，空间大小也不会改变
![在这里插入图片描述](https://img-blog.csdnimg.cn/58769cf903ca4b64a1d69433edd26f36.png)
机器计算乘除的时间比计算加减的时间慢，所以用在加减的时间可以忽略不计。
图片上部分的代码经历了一个for循环，for循环里面还有乘法，pow（x，i）也就是x的i次方，
i又是从1到n，故要算(1+2+...+n)次乘法，也就是（n^2+n）/2次，最后的/2可以忽略，故最后的T(n)=C1· n^2 + C2 · n,这里的常数C和C1和C2根据每台机器不同，值也不一样。

图片下部分只有n次乘法，故T（n）= C·n，所以下部分需要的时间要少得多
![在这里插入图片描述](https://img-blog.csdnimg.cn/4efe07dbce2c43c2af1f38c098687b2f.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/9eef9a12a9954179ae87ffe9f6650d78.png)


![在这里插入图片描述](https://img-blog.csdnimg.cn/a16653372eee4f6a80904f199a0bbe5e.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/fea3a2d82333449fba8df57f48860229.png)
![在这里插入图片描述](https://img-blog.csdnimg.cn/f7062a9ea39a4cfeab219cc76241eb8a.png)
**![加粗样式](https://img-blog.csdnimg.cn/8ef0df9b4e0d41838a19dfd269b08603.png)
logn是最快的，时间依次从小到大排列
![在这里插入图片描述](https://img-blog.csdnimg.cn/958faa59d74147b0bfe4f197b2df5835.png)

