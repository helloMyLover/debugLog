//���ļ���¼�������е����� ������¼ʱ�䣬��ǰ���е��Ĳ��裬�����ļ�����һ����С֮���Զ���գ��Լ����������������vs������ڵ���ʹ��
//���õ�����Ҫʱ�����书��
#pragma once
#include <iostream>
#include <fstream>
#include <time.h>
using namespace std;
class CLogFile
{
public:
	CLogFile(void);
	CLogFile(const char *);
	~CLogFile(void);
	time_t getTime();
	bool   closeOutPutSwitch(bool i=1);  //Ĭ�Ϲر�
	bool   closeLogSwitch(bool i=1);     

	void   createFile();

private:
	const char * fileName;
	BOOL    outPutSwitch;
	BOOL    LogSwitch;
	fstream  file;

public:
	template <typename T> void write(T str)
	{
		if(file.fail())
		{
			std::cout<<"log�ļ�δ�򿪻�����־����δ����"<<endl;
		}
		else if(outPutSwitch == 0)   //��־���ܿ���
		{
			file<<endl<<str;
		}
	}

	template <typename T> void writeOutPutWindow(T str)  //���������ֻ��ָ��lpstr �ɸĽ���
	{
		if (outPutSwitch == 1 )
		{
			return;
		} 
		else
		{
			OutputDebugString(str);
		}
	}
};



