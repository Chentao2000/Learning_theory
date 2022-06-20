import scala.io.StdIn

object ForDemo {
  def main(args: Array[String]): Unit = {
    // 请在 Begin-End 间编写代码
    /********** Begin **********/
    // 根据要求统计各单词长度
          // 创建数组  
    var arr = new ArrayBuffer[Int]()  
        // 将数据添加到数组  
    for(x<-1 to 18){  
      var line =StdIn.readLine()  
      var line1=line.toInt  
      arr.insert(x-1,line1)  
    }  
    // 将数组转换成 迭代器
    var it1=arr.toIterator
        // 遍历迭代器it1的元素  
    while (it1.hasNext){  
      println(it1.next())  
    }  


 
    /********** End **********/

  }
}
