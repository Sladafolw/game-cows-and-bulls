object GameVsComputers: TGameVsComputers
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Gamevscomputer'
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
  OnCloseQuery = res
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object ComputerMakeMove: TLabel
    Left = 328
    Top = 99
    Width = 119
    Height = 13
    Caption = #1050#1086#1084#1087#1100#1102#1090#1077#1088' '#1089#1076#1077#1083#1072#1083' '#1093#1086#1076
  end
  object EnteredYourNumber: TLabel
    Left = 8
    Top = 99
    Width = 46
    Height = 13
    Caption = #1042#1074#1077#1076#1080#1090#1077' '
  end
  object Surrend: TButton
    Left = 432
    Top = 2
    Width = 75
    Height = 25
    Caption = #1057#1076#1072#1090#1100#1089#1103
    TabOrder = 0
    OnClick = SurrendClick
  end
  object GameProcessPc: TMemo
    Left = 312
    Top = 134
    Width = 185
    Height = 89
    Lines.Strings = (
      '')
    ScrollBars = ssVertical
    TabOrder = 1
  end
  object TheNumberThatUserEntered: TEdit
    Left = 64
    Top = 96
    Width = 121
    Height = 21
    TabOrder = 2
    Text = #1042#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086
  end
  object UserMakeMove: TButton
    Left = 191
    Top = 94
    Width = 75
    Height = 25
    Caption = #1057#1076#1077#1083#1072#1090#1100' '#1093#1086#1076
    TabOrder = 3
    OnClick = UserMakeMoveClick
  end
  object GameProcessUser: TMemo
    Left = 0
    Top = 134
    Width = 185
    Height = 89
    ScrollBars = ssVertical
    TabOrder = 4
  end
  object ThatNumberTheUser: TEdit
    Left = 0
    Top = 8
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 5
    TextHint = #1042#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086
  end
  object UserMakeNumber: TButton
    Left = 127
    Top = 8
    Width = 115
    Height = 21
    Caption = #1047#1072#1075#1072#1076#1072#1090#1100' '#1095#1080#1089#1083#1086
    TabOrder = 6
    OnClick = UserMakeNumberClick
  end
  object NumberIsEnteredNotCorrectly: TMemo
    Left = 248
    Top = 4
    Width = 185
    Height = 89
    ScrollBars = ssVertical
    TabOrder = 7
  end
  object EnteredPc: TEdit
    Left = 185
    Top = 168
    Width = 121
    Height = 21
    TabOrder = 8
    Text = #1082#1086#1084#1087#1100#1102#1090#1077#1088#1072' '#1095#1080#1089#1083#1086
    Visible = False
  end
  object NumberPC: TEdit
    Left = 439
    Top = 72
    Width = 57
    Height = 21
    TabOrder = 9
    Text = 'computer'
    Visible = False
  end
end
