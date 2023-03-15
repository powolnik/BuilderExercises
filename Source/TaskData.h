//---------------------------------------------------------------------------

#ifndef TaskDataH
#define TaskDataH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
//---------------------------------------------------------------------------
class TTaskTemplate : public TForm
{
__published:	// IDE-managed Components
private:

public:
int i;	
        __fastcall TTaskTemplate(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TTaskTemplate *TaskTemplate;
//---------------------------------------------------------------------------
#endif
