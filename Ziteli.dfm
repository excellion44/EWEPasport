object Form2: TForm2
  Left = 0
  Top = 0
  Caption = #1046#1080#1090#1077#1083#1080
  ClientHeight = 667
  ClientWidth = 991
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poMainFormCenter
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 65
    Width = 991
    Height = 602
    Align = alClient
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    PopupMenu = PopupMenu1
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    Columns = <
      item
        Expanded = False
        FieldName = 'FAMILIYA'
        Width = 179
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'IMYA'
        Width = 170
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'OTCHESTVO'
        Width = 155
        Visible = True
      end
      item
        Expanded = False
        FieldName = 'GOD_ROZDENIYA'
        Width = 174
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 991
    Height = 65
    Align = alTop
    Color = clActiveCaption
    ParentBackground = False
    TabOrder = 1
    object Label1: TLabel
      Left = 16
      Top = 16
      Width = 92
      Height = 13
      Caption = #1041#1099#1089#1090#1088#1099#1081' '#1087#1086#1080#1089#1082':'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Edit1: TEdit
      Left = 16
      Top = 35
      Width = 321
      Height = 21
      TabOrder = 0
    end
  end
  object ADOQuery1: TADOQuery
    Connection = Form1.ADOConnection1
    Parameters = <>
    Left = 720
    Top = 192
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 744
    Top = 256
  end
  object PopupMenu1: TPopupMenu
    Left = 664
    Top = 456
    object N1: TMenuItem
      Caption = #1055#1088#1086#1089#1084#1086#1090#1088
    end
    object N2: TMenuItem
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100' '#1085#1086#1074#1086#1075#1086' '#1078#1080#1090#1077#1083#1103
    end
    object N3: TMenuItem
      Caption = #1059#1076#1072#1083#1080#1090#1100' '#1074#1099#1076#1077#1083#1077#1085#1085#1086#1077
    end
  end
end
