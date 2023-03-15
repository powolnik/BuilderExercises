object MainWindow: TMainWindow
  Left = 486
  Top = 215
  Width = 1740
  Height = 675
  Caption = 'MainWindow'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Title: TLabel
    Left = 408
    Top = 176
    Width = 145
    Height = 13
    Caption = 'TO BEDZIE TASK MANAGER'
  end
  object TestButton: TButton
    Left = 464
    Top = 288
    Width = 75
    Height = 25
    Caption = 'TestButton'
    TabOrder = 0
    OnClick = TestButtonClick
  end
end
