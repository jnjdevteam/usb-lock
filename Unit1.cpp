//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
    Form1->Hide() ;
    HWND hWnd = FindWindow(NULL,"BUILDER (F:)") ;
    if(hWnd)
    {
        SendMessage(hWnd,WM_CLOSE,0,0) ;
        MessageBeep(0) ;
        Form2->Show() ;
    }
}
//---------------------------------------------------------------------------

