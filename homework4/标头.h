#include<string>
#include<iostream>
using namespace std;
class creatmachine
{
public:
	string int_string(int number);                                             // int����ת��Ϊ string���� 
	char randomOperation();                                                    //������� 
	string combine(string str1, string str2, char k);                          //�������ֽ�� 
	string generateExpression();                                               //������ʽ 
	int randomNunber();                                                        //���������                                                         //�����ʽ
private:
	string formula;                                                            //��������ʽ
};
class calculator
{
public:
	float calculateResult(string str);                                          //һ�����㺯�� 
	float caculate(float Operand1, float Operand2, char Operator);              //�������㺯�� 
	void InitPriorities();                                                      //�Ƚ����ȼ����� 
private:
	float answer;                                                               //�洢���
};
class judge
{
public:
	int scan(float answer, char *p);                                             //�û���������д���ļ����ж϶Դ� 
	void getdata(float f);                                                       //�������
private:
	float user;                                                                  //�û������
};
class filemachine
{
public:
	void writefile(char *p0, char *p, int w);                                    //д�뺯�� 
	void print(int right, char *pp);                                             //��� 
	void showTip(char *ptr);                                                    //����˵�� 
	int readfile(char *p0);                                                     //��ȡ�ļ� 
};