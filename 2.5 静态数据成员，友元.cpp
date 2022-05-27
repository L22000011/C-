/* 静态成员：同一个类的所有对象都公有
* 在初始化之后，每次进入函数体，记录之前的数值，不会再初始化
1.静态数据成员：格式【static 类型说明符 成员名】

2.*静态数据成员只有1个，可以被任何对象访问
3.静态成员不会随着对象的分配而产生，也不随着对象消失而消失
而是一开始就被分配，并不在程序执行中分配

4.静态数据成员赋初值： 类型 类名::静态数据成员名 = a；
int Vist::count = 0;
5.在main中也可以访问  cout<<Visitor::count

6.而private和protected部分的静态成员只能通过类的成员
函数访问。
*/

/* 静态成员函数：static 类型 函数名（形参）{}

1.静态成员函数与类关联，
2.不与类的对象关联，所以访问静态成员函数时，可以不需要对象。
3.不能访问非静态成员
*/

//eg
#include<iostream>
class objcount {
private:
    static int count;
public:
    objcount() { count++;  }
    static int get() { return count; }
};
int objcount::count = 0;

void main()
{
    cout << objcount::get() << endl;
    objcount a, b, c, d, e, f;
    cout << objcount::get() << endl;  //类名引用访问
    cout << a.get() << endl;  //对象名引用
}


/*友元函数（类）：允许外部类和函数访问类的私有成
员和保护成员的辅助方法
1.友元函数是能访问类的所有成员的普通函数，
2.一个函数可以是多个类的友元函数，只需在各个类中分别声明。 

3.友元函数在---类内---进行声明，但它不是该类的成员函数。 

4.友元函数的定义，可以在类的内部或外部。 
 在类外定义友元函数时，与普通函数的定义一样，不应
在函数名前用类名加以限制。因此，友元函数不像成员
函数那样在调用时使用对象名，友元函数要对类的成员
进行访问，**必须在参数表中显式指明要访问的对象**

5.享有对该类一切成员的访问权（相当于成员函数）
6.不允许将某个类的构造函数、析构函数和虚函数声明为友元函数
*/

class X1 {
private:
    int x;
public:
    X1(int i) { x = i; }
    int getx();

    //友元声明
    friend void sum(X1 & a, X1& b);
};

int X1::getx() { return x; }

void sum(X1 & a, X1 & b) {
    cout << "友元求和" << a.x + b.x << endl;
}

//将另一个类的公有成员函数声明为自己的友元函数

class B; //shengming1
class A
{
public:
    void disp(B& b);
};

class B
{
private:
    int val;
public:
    friend void A::disp(B& b);
};

void A::disp(B& b)
{
    cout << "B::val=" << b.val << endl;
}


/* 友元类
1.希望一个类可以存取另一个类的私有成员时，可以将
该类声明为另一类的友元
2.友元类的所有成员函数都可视为该类的友元函数，能存
取该类的私有成员和保护成员
3.友元关系不具有对称性
4.友元关系不具有传递性*/

class A
{
    …
        friend class B;
}

/*
1.可以在类中使用其他类来定义数据成员，通常称之为
“子对象”。这种包含与被包含的对象间的关系称为
“组合”，组合关系可以嵌套。
2.子对象构造时若需要参数，则应在当前类的构造函数
的初始化列表中进行
3.先完成子对象构造，再完成当前对象的构造
    • 对象析构的次序与对象构造的次序是相反的
*/
