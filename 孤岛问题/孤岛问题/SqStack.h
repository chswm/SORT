#pragma once
          //����һ���Ƚϳ��õ�C/C++��ע�� ֻҪ��ͷ�ļ����ʼ����������ע
// �����ܹ���֤ͷ�ļ�ֻ������һ�Ρ�
class CSqStack
{
public:                            //ע���������¶��忽�����죬
								   //��Ϊû�ж���Ŀռ�����,ϵͳĬ��ǳ�������Խ����

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