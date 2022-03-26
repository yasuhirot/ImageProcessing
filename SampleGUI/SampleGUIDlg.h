
// SampleGUIDlg.h : ヘッダー ファイル
//

#pragma once


// CSampleGUIDlg ダイアログ
class CSampleGUIDlg : public CDialogEx
{
// コンストラクション
public:
	CSampleGUIDlg(CWnd* pParent = nullptr);	// 標準コンストラクター
	CString LoadBMPPath();

// ダイアログ データ
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SAMPLEGUI_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV サポート


// 実装
protected:
	HICON m_hIcon;

	// 生成された、メッセージ割り当て関数
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedOk();
};
