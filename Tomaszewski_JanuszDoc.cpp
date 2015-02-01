// Tomaszewski_JanuszDoc.cpp : implementation of the CTomaszewski_JanuszDoc class
//

#include "stdafx.h"
#include "Tomaszewski_Janusz.h"

#include "Tomaszewski_JanuszDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszDoc

IMPLEMENT_DYNCREATE(CTomaszewski_JanuszDoc, CDocument)

BEGIN_MESSAGE_MAP(CTomaszewski_JanuszDoc, CDocument)
	//{{AFX_MSG_MAP(CTomaszewski_JanuszDoc)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszDoc construction/destruction

CTomaszewski_JanuszDoc::CTomaszewski_JanuszDoc()
{
	// TODO: add one-time construction code here

}

CTomaszewski_JanuszDoc::~CTomaszewski_JanuszDoc()
{
}

BOOL CTomaszewski_JanuszDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: add reinitialization code here
	// (SDI documents will reuse this document)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszDoc serialization

void CTomaszewski_JanuszDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: add storing code here
	}
	else
	{
		// TODO: add loading code here
	}
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszDoc diagnostics

#ifdef _DEBUG
void CTomaszewski_JanuszDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CTomaszewski_JanuszDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszDoc commands
