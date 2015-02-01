// Tomaszewski_JanuszDoc.h : interface of the CTomaszewski_JanuszDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOMASZEWSKI_JANUSZDOC_H__809B0BF6_F302_4217_B37C_CB9589DD22B2__INCLUDED_)
#define AFX_TOMASZEWSKI_JANUSZDOC_H__809B0BF6_F302_4217_B37C_CB9589DD22B2__INCLUDED_

#include "Tomaszewski.h"	// Added by ClassView
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTomaszewski_JanuszDoc : public CDocument
{
protected: // create from serialization only
	CTomaszewski_JanuszDoc();
	DECLARE_DYNCREATE(CTomaszewski_JanuszDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTomaszewski_JanuszDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	CTomaszewski m_sygnal;
	virtual ~CTomaszewski_JanuszDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTomaszewski_JanuszDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOMASZEWSKI_JANUSZDOC_H__809B0BF6_F302_4217_B37C_CB9589DD22B2__INCLUDED_)
