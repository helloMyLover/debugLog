
// MakeLogFile.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������
#include "LogFile.h"

// CMakeLogFileApp:
// �йش����ʵ�֣������ MakeLogFile.cpp
//

class CMakeLogFileApp : public CWinApp
{
public:
	CMakeLogFileApp();

// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CMakeLogFileApp theApp;