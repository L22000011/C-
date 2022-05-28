   第八章 异常


1．关于C++异常处理机制，以下描述错误的为（ c  ）。 
A．异常处理机制使程序更好的从错误事件中恢复
B．try、throw和catch语句用于实现异常处理
C．引发异常的throw语句和捕获异常的catch语句必须在同一函数中
D．C++提供一组标准异常类，它们都是基类exception的派生类



2． 异常类型匹配处理时与函数重载解析不同，异常处理是由（ b ）catch子句处理，而不是由（ a ）catch子句处理，所以catch子句的（ d ）是很重要的。
A．最佳匹配的
B．最先匹配到的
C．个数
D．排列次序

3．分析以下程序的执行结果。[
#include <iostream>
using namespace std;
class MyException { };
void testFun(int test) ;
int main()
{
    try{
	   for(int i=0; i<3; i++)
	   testFun(i);   
	   cout << "in try"<<endl;
} 
catch(...) { cout<<"catch all "<<endl; }
   cout << "End"<<endl;
   return 0;
}
void testFun(int test) 
{
	Try
{
		if(test==1) throw MyException();
		if(test==2) throw "Error!";
		cout<<"In testFun "<<endl;
	} 
catch(char*) { cout<<"catch char* "<<endl;}
catch(MyException&) { cout<<"catch MyException "<<endl;}
}

In testFun
catch MyException
catch char*
in try
End



         9
输入输出流概念题
1．下面关于C++中的IO流的理解，不正确的是(	d  ).
A．流表示了信息从源到目的端的流动，数据按顺序从一个对象传送到另一对象;
B. 流中的内容可以是ASCII字符、二进制形式的数据、数字音频视频或其他形式的信息；
C. 数据被装配成字节流，无论什么格式的数据流都认为是由若干字节组成的字节序列；
D. 通过输出流对象可以实现打开磁盘文件，并将其内容显示到屏幕；


2．	C++中关于流的理解，不正确的为（d ）。
A．输出流将数据从内存传送到某个设备或磁盘文件中；
B. 输入流将数据从某个设备或磁盘文件传送到内存缓冲区；
C. 流所关联的物理设备可以是能传送字节数据的任何设备；
D. 流中的内容只能为字符，不能为二进制数据、图像、音频或其他形式的数据 


3. 下列不是ostream类的对象的为（ a）。
)标准输入流cin：istream类的对象。(2)标准输出流cout：ostream类的对象。
(3)非缓冲型标准出错流cerr：ostream类的对象。(4)缓冲型标准出错流clog：ostream类的对象

A．cin                B．cerr                C．clog            D．cout

4. 关于流对象，正确的为（ d ）。
A．程序通常使用ostream类对象cout进行输出，只能将数据从内存传送到标准输出设备；可将数据的输出端关联到其它I/0设备
B. ostream类对象cerr与clog为标准错误流对象，两者没有区别；
C. 输入流istream类对象cin负责建立数据输入通道，使数据从内存流向标准输入设备；反了
D. 以上说法都不对

5. istream类中不能实现输入字符串的成员函数为（ c）。
A．get() 字符输入函数 B.getline()   C.<<   D.read()输入

6.不能实现输出操作的成员函数为（c ）。
A．put() 字符输出函数 B.write() 输出   C.read()   D.<<

7．与C语言printf("Hello world\n"); 语句功能相同的C++语句是（c）。
A．cout>>"Hello world\n";                   B．cin>>"Hello world\n";
C．cout<<"Hello world"<<endl;               D．cin<<"Hello world"<<endl;

8. 关于字符串输入操作，说法正确的为（ b）。
A．使用get( )函数读取字符串，可以跳过流中的分隔符；getline()
B．使用getline( )函数读取字符串，可以跳过流中的分隔符；
C. 使用运算符<<，可以输入包含空格回车的字符串
D．使用read()函数只能读取字符串，不能读取其他类型的数据   可以读取其它类型

9. 准备用类对象cin进行输入操作，对其状态的检测方法正确的为（b ）。
A．if(!cin)	 cin>>x; 
B．if (cin.good ( ) )  cin>>x; 
C. if (cin.fail ( ) )  cin>>x;
D．if (cin.bad ( ) )  cin>>x;

10. 关于运算符<<和>>，理解正确的为（ d）。
A．可以使用它们对任何类型的数据进行输入与输出操作；
B．它们只能对基本类型的数据进行输入输出操作； 
C. 它们只能对用户自定义类型的数据进行输入输出操作；
D．可以通过对其进行重载，对类对象进行输入输出操作；

11.  有关文件打开方式，正确的是（ b）
A．向已有文件中追加写入新的内容，打开方式应设置为ios::in | ios::ate；   
B. 文件流ofstream对象默认的打开方式为ios::out | ios::trunc； 
文件流ifstream对象默认的打开方式为ios::in
C. 文件流fstream对象默认的打开方式为ios::out | ios::in ios::app； 
D. 文件流ifstream对象 file( "data.dat") ,打开文件的方式为ios::in | os::binary；      ios::in


/*已有文件中追加写入新的内容，打开方式应设置为ios::app
ios::in
为输入(读)而打开文件
ios::out
为输出(写)而打开文件
ios::ate
初始位置：文件尾
ios::app
所有输出附加在文件末尾
ios::trunc
如果文件已存在则先删除该文件
ios::binary
二进制方式


类                   参数的默认方式
ofstream           ios::out | ios::trunc
ifstream               ios::in
fstream             ios::in | ios::out
*/

12.  不能用于读取文件中数据的成员函数为（ a）。
A．write( )      B. read( )   C.get( )   D.getline ( )

13. 关于文本文件与二进制文件，理解不正确的为（ d）。
A．在文本模式中，任何数据被解释为一系列的字符；
B. 文本文件读写数据时，内存中存储的二进制数据需要转换为字符的形式；
C. 二进制文件读写数据时，无需进行格式的转换，流中直接传送原始字节数据；
D. 文本文件读写文件效率较高，适合大规模的数据传输；

14. 关于文件的随机读写操作，正确的理解为（ c ）。
A．只有二进制文件能实现随机读写，文本文件只能顺序读写数据
B. 可以使用成员函数istream& istream ::seekg()将文件指针指向文件中某个位置;   
输入流istream& istream ::seekp()   输出流ostream& ostream ::seekg() 用于确定指针位置
C．可以使用成员函数ostream :: tellg( ) 将文件指针指向文件中某个位置;  
istream :: tellp( )
D. 文本文件只能实现顺序读写操作，而二进制可以实现随机读写操作；
二进制模式便于进行随机的文件读写操作，通过移动指针改变位置


