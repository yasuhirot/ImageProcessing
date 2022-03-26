
// SampleGUI.h : PROJECT_NAME アプリケーションのメイン ヘッダー ファイルです
//

#pragma once

#ifndef __AFXWIN_H__
	#error "PCH に対してこのファイルをインクルードする前に 'pch.h' をインクルードしてください"
#endif

#include "resource.h"		// メイン シンボル


// CSampleGUIApp:
// このクラスの実装については、SampleGUI.cpp を参照してください
//

class CSampleGUIApp : public CWinApp
{
public:
	CSampleGUIApp();

// オーバーライド
public:
	virtual BOOL InitInstance();

// 実装

	DECLARE_MESSAGE_MAP()
};

extern CSampleGUIApp theApp;
