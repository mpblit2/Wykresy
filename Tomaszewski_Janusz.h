// Tomaszewski_Janusz.h : main header file for the TOMASZEWSKI_JANUSZ application
//

#if !defined(AFX_TOMASZEWSKI_JANUSZ_H__43128535_E4CA_4CDD_ADF8_FA37EC50D253__INCLUDED_)
#define AFX_TOMASZEWSKI_JANUSZ_H__43128535_E4CA_4CDD_ADF8_FA37EC50D253__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszApp:
// See Tomaszewski_Janusz.cpp for the implementation of this class
//

class CTomaszewski_JanuszApp : public CWinApp
{
public:
	CTomaszewski_JanuszApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTomaszewski_JanuszApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CTomaszewski_JanuszApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOMASZEWSKI_JANUSZ_H__43128535_E4CA_4CDD_ADF8_FA37EC50D253__INCLUDED_)
