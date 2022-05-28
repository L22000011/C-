//静态联编（编译时完成）（析构函数或者构造函数调用虚函数，采用静态联编）
虚函数：（动态联编：运行时完成）
1.虚函数声明只能出现在类声明中的成员函数
原型声明中。
2.只有类的普通成员函数才能声明为虚函数，
全局函数及静态成员函数不能声明为虚函数

以下不许声明虚函数 ：静态成员函数，内联成员函数；构造函数；友元函数。


3.虚函数可以在一个或多个派生类中被重复定
义，因此它属于函数重载的情况（--有些不同--）
------虚函数在派生类中重新定义时必须与基类中的原型完
全相同（函数名、参数个数、参数类型、参数顺序、返回值类型）----


4.纯虚函数没有函数体，【在基类中仅仅给出声明，
不对虚函数实现定义，而是在派生类中实现。
这个虚函数称为纯虚函数】

5.抽象类 【含有纯虚函数的类被称为抽象类】
    .包含纯虚函数的类    “后面加=0”
    `主要作用是通过它为一个类族建立一个公共
    的接口，使它们能更有效的发挥多态性。
    不能实例化，可以做子类

/*抽象类不能实例化的原因：含有虚函数（抽象类的派生类只有实现所有的纯虚函数的定义才能实例化）*/

6.抽象类只能用作基类来派生新类，不能声明
抽象类的对象，但可以声明抽象类的指针变
量和引用变量
7.抽象类中可以定义纯虚函数和普通函数。 
  如果抽象类的派生类没有定义基类中的纯虚
  函数，则必须再将该函数声明为纯虚函数，
  那么此派生类也是一个抽象类。
8.如果一个类中至少有一个纯虚函数，称为 抽象类

面向对象程序三大机制：
• 多态性（虚函数）【不同对象接受相同的信息产生不同的行为】
• 封装
• 继承

class 类名
{
virtual 类型 函数名(参数表);
}

/*xiaojie
1.赋值兼容规则的前提条件是公有继承
2.通过虚函数实现运行时多态性
3.抽象类为类族提供一个公共接口
*/




多态性（实现基础时 虚函数）
运行过程中的多态满足三个条件：1.类之间满足子类型关系
2.有声明的虚函数  3. 调用虚函数的是指向对象的指针或对象引用，或是由成员函数调用虚函数
