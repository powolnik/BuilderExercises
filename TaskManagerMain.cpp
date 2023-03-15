//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TaskManagerMain.h"
#include "TaskData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TMainWindow *MainWindow;
//---------------------------------------------------------------------------
__fastcall TMainWindow::TMainWindow(TComponent* Owner)
        : TForm(Owner)
{
        

}
//---------------------------------------------------------------------------
void __fastcall TMainWindow::TestButtonClick(TObject *Sender)
{
    Title->Caption = "nowe";
}
//---------------------------------------------------------------------------

