#pragma once
          //这是一个比较常用的C/C++杂注， 只要在头文件的最开始加入这条杂注
// ，就能够保证头文件只被编译一次。
class CSqStack
{
public:                            //注：无需重新定义拷贝构造，
								   //因为没有额外的空间申请,系统默认浅拷贝可以解决。

	CSqStack(void);
	~CSqStack(void);


	void InitStack();
	void push(int x, int y);
	int pop();
	int _x();
	int _y();
	bool full();
	bool empty();
	int Sqtop();

	void show();


private:
	enum { len = 50 };
	int stack[len];
	int top;


};