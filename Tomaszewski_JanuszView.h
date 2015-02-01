// Tomaszewski_JanuszView.h : interface of the CTomaszewski_JanuszView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOMASZEWSKI_JANUSZVIEW_H__A508C23A_593A_4C45_A117_26B32EDF955F__INCLUDED_)
#define AFX_TOMASZEWSKI_JANUSZVIEW_H__A508C23A_593A_4C45_A117_26B32EDF955F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CTomaszewski_JanuszView : public CView
{
protected: // create from serialization only
	CTomaszewski_JanuszView();
	DECLARE_DYNCREATE(CTomaszewski_JanuszView)

// Attributes
public:
	CTomaszewski_JanuszDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTomaszewski_JanuszView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CTomaszewski_JanuszView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CTomaszewski_JanuszView)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Tomaszewski_JanuszView.cpp
inline CTomaszewski_JanuszDoc* CTomaszewski_JanuszView::GetDocument()
   { return (CTomaszewski_JanuszDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TOMASZEWSKI_JANUSZVIEW_H__A508C23A_593A_4C45_A117_26B32EDF955F__INCLUDED_)
