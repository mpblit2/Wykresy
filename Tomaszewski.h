// Tomaszewski.h: interface for the CTomaszewski class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_TOMASZEWSKI_H__50C157B3_351F_4B30_BC3F_BD796E27B82C__INCLUDED_)
#define AFX_TOMASZEWSKI_H__50C157B3_351F_4B30_BC3F_BD796E27B82C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

class CTomaszewski : public CObject  
{
public:
	void RysujSygnal(CDC& aDC, CRect& aRect);
		CTomaszewski();
		virtual ~CTomaszewski();

private:
	CPen m_Pen2;
	CPen m_Pen1;
	double m_Pi;
	int m_b;
	int m_a;
	int m_r;
	double m_g[1000];
	double m_y[1000];
	COLORREF m_TabColor[1];
	
};

#endif // !defined(AFX_TOMASZEWSKI_H__50C157B3_351F_4B30_BC3F_BD796E27B82C__INCLUDED_)
