// Tomaszewski.cpp: implementation of the CTomaszewski class.
//
//////////////////////////////////////////////////////////////////////

#include "stdafx.h"
#include "Tomaszewski_Janusz.h"
#include "Tomaszewski.h"

#ifdef _DEBUG
#undef THIS_FILE
static char THIS_FILE[]=__FILE__;
#define new DEBUG_NEW
#endif
#include <math.h>

//////////////////////////////////////////////////////////////////////
// Construction/Destruction
//////////////////////////////////////////////////////////////////////

CTomaszewski::CTomaszewski()
{
	m_a=11;
	m_Pi=3,14;
	m_b=6;
	m_r=1000;

	double k=0.02;

	for(int i=0;i<m_r;i++)
	{
		k+=0.0032;
	
		m_y[i]=-m_a*tan(0.5*m_Pi+k);
		m_g[i]=m_b*tan(0.5*m_Pi+k);

	}
	m_TabColor[0]=RGB(220,0,0);
	m_TabColor[1]=RGB(0,0,220);
	m_Pen1.CreatePen(PS_SOLID,2,m_TabColor[0]);
	m_Pen2.CreatePen(PS_SOLID,2,m_TabColor[1]);

	
}

CTomaszewski::~CTomaszewski()
{

}

void CTomaszewski::RysujSygnal(CDC &aDC, CRect &aRect)
{
int y0=aRect.Height()/2;
	int Taby[1000];
	CPen* pOldPen;

	pOldPen=aDC.SelectObject(&m_Pen1);
	for(int i=12;i<m_r;i++)
		Taby[i]=y0-(int)m_y[i];
	aDC.MoveTo(12,Taby[12]);
	for(int i=12;i<m_r;i++)
	{
		if((int)m_y[i-1]<=y0 && (int)m_y[i]>=y0)
		{
			aDC.MoveTo(i+1,Taby[i]);
			aDC.LineTo(i,Taby[i]);
		}
		else 
		{
			aDC.LineTo(i,Taby[i]);
		}
	}

	pOldPen=aDC.SelectObject(&m_Pen2);
	for(int i=12;i<m_r;i++)
		Taby[i]=y0-(int)m_g[i];
	aDC.MoveTo(12,Taby[12]);
	for(int i=12;i<m_r;i++)
	{
		if((int)m_y[i-1]<=y0 && (int)m_y[i]>=y0)
		{
			aDC.MoveTo(i+1,Taby[i]);
			aDC.LineTo(i,Taby[i]);
		}
		else 
		{
			aDC.LineTo(i,Taby[i]);
		}
	}

	aDC.SelectObject(pOldPen);
}
