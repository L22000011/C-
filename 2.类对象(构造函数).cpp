/*
C++的类是在“结构体”的基础上扩充而来的
类：把各种不同类型的数据（称为数据成员和对数据
的操作（成员函数）组织在一起而形成的用户自定义的数据类型。
    C语言中的结构体只包含具有某种联系的不同类型的数据成员

C++中，类定义包括类说明（所有数据成员和成员函数的描述）
和类实现（所有成员函数的实现代码）两大部分

C++类名一般首字母D大写
*/


构造函数

全局对象或静态对象，则对象的默认值为0，否则对象的初始值是不
确定的

/*   三大类成员
private成员
– 在类之外是不能被访问的，只有类中的成员函数才能访问
private的数据成员和成员函数。 

• protected成员
–只有类的成员函数及其子类（派生类）可以访问protected的成员。

• public成员
– 可被程序中的任何函数或语句访问。
– 一般成员函数为public类型 ，用来提供一个与外界的接口，
外界只有通过这个接口才可以实现对private成员的访问。


 • 用class定义类时，如果未指明成员的访问控制
*****   类型，默认是属于private    *******
*/

/* 封装实现
 - private的数据成员构成类的内部状态。
 – public的成员函数则构成与外界通信的接口。 
 – 通过public的成员函数来访问private的数据成员，从而
在C++中实现了封装
*/




/*   成员函数
在类中{}的
可以直接写；
或者声明后在类外写


定义成员函数的一般形式为：****
返回值类型 类名::成员函数名（参数表）
{
函数体
}
*****
*/


/*编译器类的自动实现
    ·当用户什么也没定义
    则编译器会自动为类生成它们的缺省实现
• 默认构造函数 – 空函数，什么也不做
• 析构函数 – 空函数，什么也不做  （***当涉及指针时不对***）
• 拷贝构造函数 – 按bit位复制对象所占内存的内容
• 移动构造函数 – 与默认拷贝构造函数⼀样 
• 赋值运算符重载 – 与默认拷贝构造函数⼀样
*/




//如果程序员为类 X 显式的自定义了非默认构造函数，
//却没有定义默认构造函数的时候，清单 2 将会出现编译错误：
class X{
public:
	X(int i){
	a = i;
	}
private:
	int a;
};

X x; // *****错误 , 默认构造函数 X::X() 不存在



/* = default使用解决上述问题，可以让编译器自己生成默认构造函数
Defaulted 函数特性仅适用于类的特殊成员函数，且该特殊成员函数没有默认参数
*/
class X{
public:
	X()= default;  //自动构造
	X(int i){
	a = i;
}
private:
	int a;
};
X x;

/*  对象
对象内容的访问：
                1.book1.show();
                2.Book book2, *p = &book3;
                p->show();
*/

/*成员函数（含有this指针）
当参数与成员同名时，可以加this区别

void Book::regist(char *name, int number)
{
strcpy(this->name, name);
this->number = number;
}

*/
strcpy(name, newName);   ----->等价于strcpy(this->name, newName)
Number = newNmae;       ------>等价于this->Number = newNmae;

/*
局部自动对象（包括函数的对象参数）
    • 作用域是定义它的代码块或函数体，生存期从代码块的开
始执行到代码块结束。 
    • 每次执行代码块时重新构造对象。
静态对象（局部静态对象和全局对象）
    • 其作用域是定义它的函数体或程序文件，其生存期是程序
的某一次的整个运行期。 
    • 构造静态对象的次序是按它们在程序中出现的先后次序，
并在整个程序运行开始时（即在主函数运行前）只构造一次。
*/


/*变量
1.静态变量（static）在被创建时，将自动赋初值0；
2.自动变量在被创建时，其初始值是不确定的。
*/

/*构造函数（与类同名的成员函数）（可以重载）
*****   不能为构造函数指定返回值类型（包含void）  ********
·可以用来传入数值，通过public接口接触private


1.每个类必须有一个构造函数
2.如果没有显示定义构造函数，编译器提供一个无参数的空函数体的构造函数
3.默认构造函数创建对象时，如果创建的是“全局对象”‘静态对象“，默认为0，其他不定
*/

/*
构造函数的初始化表：
类名(形参表):数据成员1(初值1),数据成员2(初值2)…
{ … }
*/
//初始化
class Date
{
public:
Date():year(2000),month(1),day(1) {”委派构造函数“}
Date(int y, int m, int d):year(y),month(m),day(d) {//此处引用的函数称为”委派构造函数“}
private:
int year, month, day;
}

  
//拷贝对象赋值
  Book book1, book2;
  book1.regist("C++",1001);
  
  book2 = book1;
  book1.show();
  book2.show();
  
 
/*拷贝构造函数：
  类名([const] 类名 &形式参数)
{ 函数体 }
  
  1.拷贝构造函数的名称与类的名称相同，且它只有“一个”参数，该参数就是对一个该类对象的引用。
    • 拷贝构造函数的功能是通过将一个同类型对象的值
2.拷贝给一个新对象，来完成对新对象的初始化。 • 出现在以下位置
– 初始化式
– 参数传递*/
    
    
  //例子：
private:
  int x, int u;
publilc:
  Point(){}
Point(int inx, int iny) {
x = inx;
y = iny; }
Point(Point &p)   **********
{
x = p.x;
y = p.y;
cout<<"执行拷贝构造函数"<<endl; 
}
void Show(char *name)
{
cout<<endl
<<name
<<"("<<x
<<","<<y<<")"
<<endl; }
};
void Print(Point p)
{
p.Show("");
}
  


/*
拷贝构造函数
1.浅拷贝（传递指针）
    如果程序员没有为所设计的类提供显式的拷
    贝构造函数，则系统会自动提供一个默认的拷贝构造函数。
    ·其功能是：把作为参数的对象的数据成员逐个拷贝到
    目标对象中，这称为成员级复制（或浅拷贝）。
2.深拷贝（const）
*/

//浅拷贝
class Person
{
private:
char *name;
int num;
public:
Person(int i, char *str)
{
name = new char[strlen(str)+1];
strcpy(name, str);
num = i; 
}
void show() 
{
cout<<" name = "<<name<<endl;
cout<<" num = "<<num<<endl; }
void SetName (char *str) {
strcpy(name, str);
}
void SetNum (int n)
{
num = n;
}
};

//深度拷贝
class Person
{
……
public:
Person(const Person &x)   //const
{
name = new char[strlen(x.name)+1];
strcpy(name, x.name);
num = x.num; }}


/*移动构造函数：指的就是以移动而非深拷贝的方式
初始化含有指针成员的类对象。简单的理解，
移动语义指的就是将其他对象（通常是临时对象）拥有的内存资源“移为已用”。

*/
