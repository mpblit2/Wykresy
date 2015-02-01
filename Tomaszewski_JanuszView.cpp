// Tomaszewski_JanuszView.cpp : implementation of the CTomaszewski_JanuszView class
//

#include "stdafx.h"
#include "Tomaszewski_Janusz.h"

#include "Tomaszewski_JanuszDoc.h"
#include "Tomaszewski_JanuszView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszView

IMPLEMENT_DYNCREATE(CTomaszewski_JanuszView, CView)

BEGIN_MESSAGE_MAP(CTomaszewski_JanuszView, CView)
	//{{AFX_MSG_MAP(CTomaszewski_JanuszView)
		// NOTE - the ClassWizard will add and remove mapping macros here.
		//    DO NOT EDIT what you see in these blocks of generated code!
	//}}AFX_MSG_MAP
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszView construction/destruction

CTomaszewski_JanuszView::CTomaszewski_JanuszView()
{
	// TODO: add construction code here

}

CTomaszewski_JanuszView::~CTomaszewski_JanuszView()
{
}

BOOL CTomaszewski_JanuszView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszView drawing

void CTomaszewski_JanuszView::OnDraw(CDC* pDC)
{
	CTomaszewski_JanuszDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// TODO: add draw code for native data here
	CRect aRect;
	GetClientRect(&aRect);

	pDC->SetMapMode(MM_ANISOTROPIC);
	pDC->SetViewportExt(aRect.Width(),aRect.Height());
	pDC->SetWindowExt(1024,768);
	pDC->DPtoLP(&aRect);

	//-------osie----------------
	
	int y0 = aRect.Height()/2;
    int x0 = aRect.Width()/2;

	CPen* pOldPen;
	CPen pioro,pioro1,pioro_siatka,pioro_oy;
	pioro.CreatePen(PS_SOLID,1,RGB(1,1,1));
	pioro1.CreatePen(PS_SOLID,2,RGB(1,1,1));
	pioro_siatka.CreatePen(PS_DOT,1,RGB(100,100,100));
	pioro_oy.CreatePen(PS_SOLID,2,RGB(1,1,1));
	pOldPen=pDC->SelectObject(&pioro);


	//-------rysuje siatke----------
	pOldPen=pDC->SelectObject(&pioro_siatka);
	int l=8;
	for(int i=1;i<l;i++)
	{	
		//Rysuje linie pionowe siatki
		pDC->MoveTo((aRect.Width()/l)*i,12);
		pDC->LineTo((aRect.Width()/l)*i,aRect.Height()-12);
		//Rysuje linie poziome siatki
		pDC->MoveTo(12,(aRect.Height()/l)*i);
		pDC->LineTo(aRect.Width()-12,(aRect.Height()/l)*i);		
	}


	CFont * pFont = new CFont();
	pFont->CreateFont(
		38,
		0,0,0,
		FW_NORMAL,
		0,0,0,
		ANSI_CHARSET,
		OUT_DEFAULT_PRECIS,
		CLIP_DEFAULT_PRECIS,
		DEFAULT_QUALITY,
		DEFAULT_PITCH | FF_ROMAN,
		"Wlasna czcionka"
		);
	
	//-------Wypisywanie Legendy na pulpicie--------
	pDC->SetTextColor(RGB(0,0,0));
	pDC->SetBkMode(TRANSPARENT);
	pDC->TextOut(x0-70,10,"Legenda: ");
	
	pDC->SetTextColor(RGB(220,0,0));
	pDC->TextOut(x0-70,40,"y(x)=-a*tan(0.5*pi+x)");
	
	pDC->SetTextColor(RGB(0,0,220));
	
	pDC->TextOut(x0-70,70,"g(x)=b*tan(0.5*pi+x)");
	
	
//-------rysuje os OX---------
	pOldPen=pDC->SelectObject(&pioro_oy);
	pDC->MoveTo(12,y0);
	pDC->LineTo(1012,y0);
//-------rysuje os OY---------
	pOldPen=pDC->SelectObject(&pioro_oy);
	pDC->MoveTo(12,12);
	pDC->LineTo(12,756);

	pOldPen=pDC->SelectObject(&pioro1);

//----zakonczenie osi OX----
	pDC->MoveTo(1012,y0);
	pDC->LineTo(984,y0-6);
	pDC->MoveTo(1012,y0);
	pDC->LineTo(984,y0+6);

//----zakonczenie osi OY----
	pDC->MoveTo(12,0);
	pDC->LineTo(12-6,28);
	pDC->MoveTo(12,0);
	pDC->LineTo(12+6,28);
//----------------------------
	pOldPen=pDC->SelectObject(&pioro1);
	int s=8;
	for(int i=1;i<s;i++)
	{	
		
		pDC->MoveTo((aRect.Width()/s)*i,y0-7);
		pDC->LineTo((aRect.Width()/s)*i,y0+7);
	
		pDC->MoveTo(5,(aRect.Height()/s)*i);
		pDC->LineTo(18,(aRect.Height()/s)*i);	
	}

	pDC->SetTextColor(RGB(0,0,0));
	pDC->SetBkMode(TRANSPARENT);
	
	pDC->TextOut(40,10,"y(x),g(x)");
	pDC->TextOut(990,y0+20,"x");

	//--------------------------------

    pDC->SetTextColor(RGB(100,100,100));
	pDC->SetBkMode(TRANSPARENT);
	pDC->TextOut(x0-45,y0+200,"ZESTAW NR 11");
	pDC->TextOut(x0-85,y0+230,"Wartoœci wspó³czynników: ");
	pDC->TextOut(x0-15,y0+260,"a = 11");
	pDC->TextOut(x0-15,y0+290,"b = 6");


pDoc->m_sygnal.RysujSygnal(*pDC, aRect);
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszView printing

BOOL CTomaszewski_JanuszView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CTomaszewski_JanuszView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CTomaszewski_JanuszView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszView diagnostics

#ifdef _DEBUG
void CTomaszewski_JanuszView::AssertValid() const
{
	CView::AssertValid();
}

void CTomaszewski_JanuszView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CTomaszewski_JanuszDoc* CTomaszewski_JanuszView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CTomaszewski_JanuszDoc)));
	return (CTomaszewski_JanuszDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CTomaszewski_JanuszView message handlers
