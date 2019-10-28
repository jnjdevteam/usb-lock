//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender) // 확인
{
    Memo1->Lines->LoadFromFile("lock.txt") ;
    AnsiString a=Memo1->Text ;
    Memo1->Clear() ;
    if(a==Edit1->Text)
    {
        Form1->Timer1->Enabled=false ;
        ShellExecute(NULL,"open","F:\\",NULL,NULL,SW_SHOWNORMAL) ;
        Form2->Close() ;
    }
    else
    {
        MessageBeep(0) ;
        ShowMessage("암호가 틀립니다.") ;
        Edit1->Clear() ;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
    Form2->Close() ;
}
//---------------------------------------------------------------------------



