object GameForTwoPersonThisFormToUser2: TGameForTwoPersonThisFormToUser2
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'GameForTwoPersonThisFormToUser2'
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
  object User2: TLabel
    Left = 224
    Top = 8
    Width = 39
    Height = 13
    Caption = #1048#1075#1088#1086#1082' 2'
  end
  object NumberThatUserEntered: TEdit
    Left = 8
    Top = 72
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object ThatNumberUser2: TButton
    Left = 224
    Top = 158
    Width = 97
    Height = 25
    Caption = #1047#1072#1075#1072#1076#1072#1090#1100' '#1095#1080#1089#1083#1086
    TabOrder = 1
    OnClick = ThatNumberUser2Click
  end
  object ThatNumberUser: TEdit
    Left = 207
    Top = 117
    Width = 130
    Height = 21
    NumbersOnly = True
    TabOrder = 2
    Text = #1042#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086
  end
  object DetailsGame: TMemo
    Left = 0
    Top = 144
    Width = 185
    Height = 89
    ScrollBars = ssVertical
    TabOrder = 3
  end
  object ThatNumberWhichUser1: TEdit
    Left = 367
    Top = 29
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 4
  end
  object User2MakeMove: TButton
    Left = 176
    Top = 70
    Width = 75
    Height = 25
    Caption = #1057#1076#1077#1083#1072#1090#1100' '#1093#1086#1076
    TabOrder = 5
    OnClick = User2MakeMoveClick
  end
  object SwithToUser1: TButton
    Left = 367
    Top = 198
    Width = 130
    Height = 25
    Caption = #1055#1077#1088#1077#1081#1090#1080' '#1082' '#1080#1075#1088#1086#1082#1091' 1'
    TabOrder = 6
    OnClick = SwithToUser1Click
  end
  object Surrend: TButton
    Left = 440
    Top = -2
    Width = 57
    Height = 25
    Caption = #1057#1076#1072#1090#1100#1089#1103
    TabOrder = 7
    OnClick = SurrendClick
  end
  object UserEnteredNumberNotCorrectly: TMemo
    Left = 352
    Top = 104
    Width = 145
    Height = 64
    TabOrder = 8
    Visible = False
  end
end
