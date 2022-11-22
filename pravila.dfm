object Form8: TForm8
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Form8'
  ClientHeight = 510
  ClientWidth = 510
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCloseQuery = res
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = -5
    Top = 0
    Width = 518
    Height = 505
  end
  object Memo1: TMemo
    Left = -5
    Top = 0
    Width = 497
    Height = 129
    TabOrder = 0
  end
  object BackToMenu: TButton
    Left = 160
    Top = 459
    Width = 155
    Height = 25
    Caption = #1042#1099#1093#1086#1076' '#1074' '#1075#1083#1072#1074#1085#1086#1077' '#1084#1077#1085#1102
    TabOrder = 1
    OnClick = BackToMenuClick
  end
end
