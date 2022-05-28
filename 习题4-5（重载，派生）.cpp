      4-重载

2、下列关于C++运算符函数的返回类型的描述中,错误的是（   c ）。 
 A  可以是类类型       B  可以是int类型 
 C  可以是void类型    D  可以是float类型
 
 
 
3、在重载一个运算符时，其参数表中没有任何参数，这表明该运算符是（ b   ）。
    A. 作为友元函数重载的1元运算符         B. 作为成员函数重载的1元运算符
    C. 作为友元函数重载的2元运算符         D. 作为成员函数重载的2元运算符

   
4、下列运算符中, （   b ）运算符在C++中不能重载。 
     A  ?: 与 =       B  -> 与 ::     C  new 与delete   D  &与 ()  

5、 下列运算符不能用友元函数重载的是（ b   ）。
 A  +       B  =       C  ++       D  <<    

   
 6、为一个类T重载操作符”-”，可以用进行（  d  ）重载。 
 A  成员函数     B 友元函数    C  普通函数     D  三种形式都可以
    
7、 友元运算符obj>obj2被C++编译器解释为（    a）。 
     A  operator>(obj1,obj2) 
     B  >(obj1,obj2) 
     C  obj2.operator>(obj1) 
     D  obj1.oprator>(obj2) 

   
       
8、 在表达式x+y*z中，+是作为成员函数重载的运算符，
*是作为非成员函数重载的运算符。下列叙述中正确的是（   c ）。 
A  operator+有两个参数，operator*有两个参数 
B  operator+有两个参数，operator*有一个参数 
C  operator+有一个参数，operator*有两个参数 
D  operator+有一个参数，operator*有一个参数

       
 9、如果表达式a+b中的"+"是作为成员函数重载的运算符，
 若采用运算符函数调用格式，则可表示为（   a ）。  
A  a.operator+(b)  
B  b.operator+(a)        
C   operator+(a,b)     
D   operator(a+b)
       
       
11、如果表达式a++中的"++"是作为普通函数重载的运算符，
若采用运算符函数调用格式，则可表示为（ c   ）。
  A  a.operator++()  成员  
  B. operator++(a)    
  C. operator++(a,1)    
  D. operator++(1,a)

12、  如果表达式++a中的"++"是作为
成员函数重载的运算符，若采用运算符函数调用格式，则可表示为（  d  ）。
    A  a.operator++(1)            
    B operator++(a)      
    C operator++(a,1)    
    D a.operator++()  

       /* 重载前缀:a.operator++(); 重载后缀:a.operator++(1) */
       
       
       
13、如果表达式a==b中的"=="是作为T类重载的运算符，若采用运算符函数调用格式，则可表示为（  a  ）。
    A. a.operator==(b)     B. b.operator==(a)    C. operator==(a,b)     D. operator==(b,a)

14、一个程序中数组类Array对象a和整形变量k定义为Array a(2,4);int k;
，且程序中包含有语句"a(1,2)=++k*3;"，则此语句中肯定属于重载操作符的是（a  ）。
    A. ( )     B. =      C. ++      D. *



15、假定M是一个类名，且M中重载了操作符=，可以实现M对象间的
连续赋值，如m1=m2=m3; (m1=m2)=m3; 重载操作符=的函数声明应为（  d）。
  A. int operaotor=(M);     B int M::operator=();  
C M M::operator=( );     D M & M::operator=(M);



16、关于流插入运算符<<的重载，下列说法不正确的是（ b  ）。 
    A. 运算符函数的返回值类型是ostream  。
    B. 重载的运算符必须定义为类的成员函数。
    C. 运算符函数的第一个参数的类型是ostream  。
    D. 运算符函数有两个参数。

17、为类重载T流提取运算符>>，下列声明正确的是（ b  ）。
A. ostream& operator>>(ostream&, T&);   
B. istream& operator>>(istream&, T&);   
    C. istream& operator>>(istream&, T );   
    D. istream  operator>>(istream&, T&);   


18、对于涉及动态内存分配的类T，哪些运算符可以不必重载（ c ）。 
A. ( )     B. =      C. &     D. *





        5-继承
  第五章
1．下面关于C++中类的继承与派生的说法错误的是（ c  ）。 
A． 基类的 protected 成员在  公有派  生类的 成员函数 中可以直接使用 
B． 基类的  protected 成员在 私有派 生类的 成员函数 中可以直接使用 
C． 私有派生时，基类的所有成员访问权限在派生类中保持不变 
D． 继承可以分为单一继承与多重继承
 
2．派生类继承基类时，如果省略继承方式，则默认为（   c  ）继承。
A． 公有       B． 保护       // C.  私有



4．关于多重继承二义性的描述，错误的是（  d ）。
A．派生类的多个基类中存在同名成员时，派生类对这个成员访问可能出现二义性
B．一个派生类是从具有共同的间接基类的两个直接基类派生来的，派生类对该公共基类的访问可能出现二义性
C．解决二义性最常用的方法是作用域运算符对成员进行限定
D．派生类和它的基类中出现同名函数时，将可能出现二义性  //继承时的同名成员隐藏规则，不会出现这种情况，当同名时直接屏蔽基类的

5．在如下继承层次下，当实例化有派生类对象时，调用构造函数的顺序为（  d ）。
class Base{…};
class Base1: virtual Base{…};
class Base2: virtual Base{…};
class Derived : public Base2, public Base1{…};
A.  Base(), Base1(), Base(), Base2(), Drived()
B.  Base(), Base2(), Base(), Base1(), Drived()
C.  Base(), Base1(), Base2(), Drived()
D.  Base(), Base2(), Base1(), Drived()

6．派生类的对象对它的基类成员中（  a ）是可以访问的。
A.  公有继承的公有成员
B.  公有继承的私有成员
C.  公有继承的保护成员
D.  私有继承的公有成员

7．派生类采用（ a ）方式可以使基类中的保护数据成员成为自己的私有数据成员。
A. 私有继承　　　B.保护继承　　　C. 公有继承　　　D.私有、保护、公有均可

8．在如下继承层次下，有关访问权限描述不正确的为（ c ）。
class A{ 
protected:  int x; 
 public :    void  set_X( int i){ x = i;} ; 
           int  get_X( ){ return x; } ;  
};
class B : public A
{    int y;  };
class C: protected B
{…};
A.  B类中可以直接访问父类A中的数据成员x;
B.  B类对象不可以直接访问其数据成员y; 
C.  C 类对象可以调用get_X()访问父类数据成员x;

9．如有基类Base和派生类Derived，实例化对象Base b; Derived d；叙述正确的是（d  ）。
A．	Derived* pDev = new Base();
B．	Derived类中不能定义与Base类同名的成员，以免引用时引起歧义；
C．	Base* pb =&d ;  Derived* pd = &b错; 为正确的赋值操作；
D．	Base& rb = d;   Base  bb = d; 为正确的赋值操作；

10．分析以下程序的执行结果。[
#include<iostream>
using namespace std;
class base{ 
	int n;
public:
	base (int a){ 
		cout << "constructing base class" << endl;
		n=a;
	    cout << "n=" << n << endl;
	}
	~base(){ cout << "destructing base class" << endl; }
};
class subs : public base{     //Subs以public继承base
	int m;
public:
	subs(int a, int b) : base(a){ 
		cout << "constructing sub class" << endl;
		m=b;
		cout << "m=" << m << endl;
	}
	~subs(){ cout << "destructing sub class" << endl; }
};
void main (){
	subs s(1,2);
}
  
/*
constructing base class
n=1
constructing sub class
m=2
destructing sub class
destructing base class
*/
  
11．分析以下程序的执行结果。
#include<iostream>
using namespace std;
class Animal{
protected:
	string name ;
public:
	Animal(string n):name(n)
	{ 	cout<< "Animal 1"<<endl; 	}
	Animal():name("无名")
	{ 	cout<< "Animal 0"<<endl;	}
    void show()
	{ cout<<name<<endl; 	}
};

class Cat: public Animal
{
    int year;
public:
	Cat( ) 
	{	   cout<<"Cat 0"<<endl; 	}
	Cat(string n, int y):Animal(n),year(y)
	{ 	   cout<<"Cat 1"<<endl; 	}
	  void show()
	{ cout<<name<<" "<<year <<" years old\n"; 	}
};

void main()
{
   Cat cat1, cat2("Garfield",3);
   cat1.show();
   cat2.show();
}
  
  
/*
Animal 0
Cat 0
Animal 1
Cat 1
无名 0 years old？？？
Garfield 3 years old
*/

    

       
       
       
       
       
