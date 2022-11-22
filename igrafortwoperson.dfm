object GameForTwoUserThisFormForUser1: TGameForTwoUserThisFormForUser1
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'GameForTwoUserThisFormForUser1'
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
  OnCloseQuery = re
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object User1: TLabel
    Left = 224
    Top = 8
    Width = 39
    Height = 13
    Caption = #1048#1075#1088#1086#1082' 1'
  end
  object NumberThatUserEntered: TEdit
    Left = 8
    Top = 69
    Width = 121
    Height = 21
    TabOrder = 0
  end
  object User1MakeNumber: TButton
    Left = 224
    Top = 158
    Width = 75
    Height = 25
    Caption = #1079#1072#1075#1072#1076#1072#1090#1100
    TabOrder = 1
    OnClick = User1MakeNumberClick
  end
  object ThatNumberUser1: TEdit
    Left = 199
    Top = 131
    Width = 137
    Height = 21
    NumbersOnly = True
    TabOrder = 2
    Text = #1042#1074#1077#1076#1080#1090#1077' '#1095#1080#1089#1083#1086
  end
  object DetailsGame: TMemo
    Left = 8
    Top = 134
    Width = 185
    Height = 89
    ScrollBars = ssVertical
    TabOrder = 3
  end
  object User1MakeMove: TButton
    Left = 167
    Top = 67
    Width = 75
    Height = 25
    Caption = #1057#1076#1077#1083#1072#1090#1100' '#1093#1086#1076
    TabOrder = 4
    OnClick = User1MakeMoveClick
  end
  object NumberThatUser2Entered: TEdit
    Left = 376
    Top = 27
    Width = 121
    Height = 21
    NumbersOnly = True
    TabOrder = 5
  end
  object SwithToAnotherUser: TButton
    Left = 352
    Top = 198
    Width = 145
    Height = 25
    Caption = #1055#1077#1088#1077#1081#1090#1080' '#1082' '#1080#1075#1088#1086#1082#1091' 2'
    TabOrder = 6
    OnClick = SwithToAnotherUserClick
  end
  object Surrend: TButton
    Left = 440
    Top = -4
    Width = 65
    Height = 25
    Caption = #1057#1076#1072#1090#1100#1089#1103
    TabOrder = 7
    OnClick = SurrendClick
  end
  object UserEnteredNumberNotCorrectly: TMemo
    Left = 356
    Top = 96
    Width = 151
    Height = 73
    TabOrder = 8
    Visible = False
  end
end
