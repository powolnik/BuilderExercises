//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "TaskData.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TTaskTemplate *TaskTemplate;
//---------------------------------------------------------------------------
__fastcall TTaskTemplate::TTaskTemplate(TComponent* Owner)
        : TForm(Owner)
{
        i = 1;
}
//---------------------------------------------------------------------------
