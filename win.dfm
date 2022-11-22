object Winn: TWinn
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Winn'
  ClientHeight = 250
  ClientWidth = 500
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnCloseQuery = res
  PixelsPerInch = 96
  TextHeight = 13
  object YouWin: TLabel
    Left = 208
    Top = 64
    Width = 70
    Height = 13
    Caption = #1042#1099' '#1074#1099#1081#1075#1088#1072#1083#1080'!'
    Color = clLime
    ParentColor = False
  end
  object NumberIs: TLabel
    Left = 152
    Top = 160
    Width = 59
    Height = 13
    Caption = #1063#1080#1089#1083#1086' '#1073#1099#1083#1086
  end
  object Number: TLabel
    Left = 322
    Top = 160
    Width = 3
    Height = 13
  end
  object BackToMenu: TButton
    Left = 152
    Top = 198
    Width = 201
    Height = 25
    Caption = #1042#1077#1088#1085#1091#1090#1100#1089#1103' '#1074' '#1075#1083#1072#1074#1085#1086#1077' '#1084#1077#1085#1102
    TabOrder = 0
    OnClick = BackToMenuClick
  end
end
