object ForDemo{
 def main(args:  Array[String]: Unit= {
  val list:Seq[Int] = 1::(2::(3::(4::Nil)))
  val list1:Seq[String] = "edu"::("coder"::Nil)
  val list2 = Nil
   // Nil 代表一个空列表
   // :: 的发音为“cons  它可以把新元素组合到现有列表的最前端，然后返回作为执行结果的新列表
   println(list)
   println(list1)
   println(list2)
   
 })
}
