﻿object Form3: TForm3
  Left = 0
  Top = 0
  Caption = #1050#1072#1088#1090#1086#1095#1082#1072' '#1078#1080#1090#1077#1083#1103
  ClientHeight = 516
  ClientWidth = 893
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 16
    Width = 50
    Height = 13
    Caption = #1060#1072#1084#1080#1083#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 248
    Top = 16
    Width = 23
    Height = 13
    Caption = #1048#1084#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label3: TLabel
    Left = 419
    Top = 16
    Width = 56
    Height = 13
    Caption = #1054#1090#1095#1077#1089#1090#1074#1086
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label4: TLabel
    Left = 636
    Top = 16
    Width = 95
    Height = 13
    Caption = #1044#1072#1090#1072' '#1088#1086#1078#1076#1077#1085#1080#1103
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Паспорт: TLabel
    Left = 336
    Top = 72
    Width = 49
    Height = 13
    Caption = #1055#1072#1089#1087#1086#1088#1090
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object PasportID: TLabel
    Left = 400
    Top = 72
    Width = 48
    Height = 13
    Caption = 'PasportID'
  end
  object IDChelovek: TLabel
    Left = 635
    Top = 72
    Width = 55
    Height = 13
    Caption = 'IDChelovek'
  end
  object Edit1: TEdit
    Left = 8
    Top = 32
    Width = 209
    Height = 23
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 0
  end
  object Edit2: TEdit
    Left = 248
    Top = 32
    Width = 137
    Height = 23
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
  end
  object Edit3: TEdit
    Left = 416
    Top = 32
    Width = 185
    Height = 23
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
  end
  object DBGrid1: TDBGrid
    Left = 8
    Top = 91
    Width = 877
    Height = 193
    Color = clCream
    DataSource = DataSource1
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentFont = False
    PopupMenu = PopupMenu1
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    OnDrawColumnCell = DBGrid1DrawColumnCell
    Columns = <
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'SERIYA'
        Width = 66
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'NOMER'
        Width = 75
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'KEM'
        Width = 276
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'KOGDA'
        Width = 94
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'KOD'
        Width = 83
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'MESTO'
        Width = 242
        Visible = True
      end>
  end
  object Edit4: TEdit
    Left = 635
    Top = 32
    Width = 121
    Height = 23
    Enabled = False
    Font.Charset = RUSSIAN_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Georgia'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
  end
  object Button1: TButton
    Left = 384
    Top = 483
    Width = 137
    Height = 25
    Caption = #1056#1077#1076#1072#1082#1090#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 5
  end
  object DBGrid2: TDBGrid
    Left = 8
    Top = 312
    Width = 877
    Height = 165
    Color = clMenu
    DataSource = DataSource2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -12
    Font.Name = 'Tahoma'
    Font.Style = [fsBold]
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    ParentFont = False
    PopupMenu = PopupMenu2
    TabOrder = 6
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = [fsBold]
    OnDrawColumnCell = DBGrid2DrawColumnCell
    Columns = <
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'ADRES'
        Width = 564
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'DATA_PROPISKI'
        Width = 151
        Visible = True
      end
      item
        Color = clBtnFace
        Expanded = False
        FieldName = 'DATA_VYPISKI'
        Width = 128
        Visible = True
      end>
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 808
    Top = 136
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 744
    Top = 136
  end
  object ADOQuery2: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 552
    Top = 376
  end
  object DataSource2: TDataSource
    DataSet = ADOQuery2
    Left = 632
    Top = 376
  end
  object PopupMenu1: TPopupMenu
    Left = 448
    Top = 208
    object N1: TMenuItem
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      OnClick = N1Click
    end
    object N2: TMenuItem
      Caption = #1057#1076#1077#1083#1072#1090#1100' '#1090#1077#1082#1091#1097#1080#1084
      OnClick = N2Click
    end
  end
  object PopupMenu2: TPopupMenu
    Left = 448
    Top = 368
  end
end
