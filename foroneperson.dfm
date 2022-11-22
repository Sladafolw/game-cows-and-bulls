object GameForOnePerson: TGameForOnePerson
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'GameForOnePerson'
  ClientHeight = 241
  ClientWidth = 515
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poScreenCenter
  OnClose = res
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object EnteredYourNumber: TLabel
    Left = 0
    Top = 35
    Width = 107
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '#1074#1072#1096#1077' '#1095#1080#1089#1083#1086' '
  end
  object GameProcess: TMemo
    Left = 0
    Top = 126
    Width = 281
    Height = 97
    Lines.Strings = (
      '')
    ScrollBars = ssVertical
    TabOrder = 0
  end
  object TheNumberThatUserEntered: TEdit
    Left = 113
    Top = 32
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 1
  end
  object MakeAMove: TButton
    Left = 422
    Top = 198
    Width = 75
    Height = 25
    Caption = #1057#1076#1077#1083#1072#1090#1100' '#1093#1086#1076
    TabOrder = 2
    OnClick = MakeAMoveClick
  end
  object TheNumberEnteredPc: TEdit
    Left = 360
    Top = 56
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 3
  end
  object BackToMenu: TButton
    Left = 422
    Top = 144
    Width = 83
    Height = 25
    Caption = #1042#1099#1081#1090#1080' '#1074' '#1084#1077#1085#1102
    TabOrder = 4
    OnClick = BackToMenuClick
  end
end
