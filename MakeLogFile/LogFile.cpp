#include "StdAfx.h"
#include "LogFile.h"


CLogFile::CLogFile(const char * str):LogSwitch(0),outPutSwitch(0)  //Ĭ�Ͽ�����־��������ڹ���
{
	fileName = str;
	createFile();
	file<<endl<<endl<<getTime();
}

CLogFile::CLogFile():fileName("log.txt"),LogSwitch(0),outPutSwitch(0)
{
	createFile();  //�����ļ�  ����ļ��Ƿ����&����ļ���С ��λ�����һ�� �������� 
	file<<endl<<endl<<getTime();
}


CLogFile::~CLogFile(void)
{
}

time_t CLogFile::getTime()
{
	time_t now_time;
	now_time = time(NULL);
	return now_time;
}

bool CLogFile::closeLogSwitch(bool i)
{
	if( i==1 )
	{
		LogSwitch=1;  //�ر�log����  
		return 1;
	}
	else if(i == 0)  //����
	{
		LogSwitch=0;
		return 1;
	}
	return 0;//����ʧ��
}

void CLogFile::createFile()
{
//	if(file.)
	if(LogSwitch == 1)  //��־����δ���� ���ش����ļ�
		return;

	file.open(fileName,ios_base::app);
	if (file.fail())
	{
		file.open(fileName,ios_base::out);
	}
}


