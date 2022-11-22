object Form3: TForm3
  Left = 0
  Top = 0
  BorderStyle = bsDialog
  Caption = 'Form3'
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
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 2
    Top = -11
    Width = 500
    Height = 513
  end
  object ForOnePerson: TButton
    Left = 168
    Top = 282
    Width = 137
    Height = 25
    Caption = #1054#1076#1080#1085#1086#1095#1085#1072#1103' '#1080#1075#1088#1072' '
    TabOrder = 0
    OnClick = ForOnePersonClick
  end
  object CloseThisGame: TButton
    Left = 168
    Top = 414
    Width = 137
    Height = 25
    Caption = #1047#1072#1082#1088#1099#1090#1100' '
    TabOrder = 1
    OnClick = CloseThisGameClick
  end
  object GameWithComputers: TButton
    Left = 168
    Top = 344
    Width = 137
    Height = 33
    Caption = #1048#1075#1088#1072' '#1087#1088#1086#1090#1080#1074' '#1082#1086#1084#1087#1100#1102#1090#1077#1088#1072
    TabOrder = 2
    OnClick = GameWithComputersClick
  end
  object Rules: TButton
    Left = 168
    Top = 383
    Width = 137
    Height = 25
    Caption = #1055#1088#1072#1074#1080#1083#1072
    TabOrder = 3
    OnClick = RulesClick
  end
  object GameUserWithUser: TButton
    Left = 168
    Top = 313
    Width = 137
    Height = 25
    Caption = #1048#1075#1088#1072' '#1074#1076#1074#1086#1105#1084
    TabOrder = 4
    OnClick = GameUserWithUserClick
  end
end
