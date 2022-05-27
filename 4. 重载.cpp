/*操作符重载：（不是所得运算符都可以重载）
类中可以使用两种方法对运算符进行重载：
1 重载为类的成员函数
2 重载为类的友元函数


重载规则：
1.   .、.*、::、？:、sizeof都不能被重载
2.不能定义新的运算符。
3.既不会改变原运算符的优先级和结合
性，也不会改变使用运算符的语法和参数个数
4.重载运算符的函数不能包含有默认值的参数。
5.运算符必须与自定义类型的对象一起使用，
要求其参数至少有一个是自定义类型的对象
6.用于自定义类型对象的运算符一般必须重载，
但是“=”和“&”不必用户重载。

7.当重载为类的成员函数时，运算符重载函数的
形参个数要比运算符操作数个数少一个；若重
载为友元函数，则参数个数与操作数个数相同。

8.只能通过成员函数重载。  “=”、“（）”、“[ ]”、“->”

*/
//运算符重载
ClassName& operator= (const ClassName& right)
{
if (this != &right) {// 避免自己赋值给自己
// 将right对象中的内容复制到当前对象中...
}
return *this;


/*
如果返回类型是引用&，则数组运算符调用可以出现在等号左边，接受赋值，即
Obj[index] = value;
    如果返回类型不是引用，则只能出现在等号右边
Var = Obj[index];
*/

以下语句均使用了自动类型转换，当构造函数、类型转换函数
 均使用了explicit声明时，它们就不能用于自动类型转换了，
 故下面的语句都不能通过编译
Dst d2 = s; // ERROR！ 不能自动类型转换!
Func(s); // ERROR！ 不能自动类型转换!

使用=delete修饰的成员函数，不允许被调用。
使用=delete删除普通函数（非成员函数）。
可以消除一些自动类型转换带来的隐患。


小结：
运算符重载的意义是使系统已有的运算符对用户自定义的数据类型进行操作。
 运算符重载的实质就是运算符函数的重载。
  在类中采用两种方法对运算符进行重载：
    1 重载为类的成员函数
    2 重载为类的友元函数
 重载为类的成员函数时，引用对象本身是
一个操作数，且在双目运算符的左边。
  一般双目运算符的重载用友元函数，单目
运算符的重载用成员函数
