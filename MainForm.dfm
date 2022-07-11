object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'EWEPasport'
  ClientHeight = 742
  ClientWidth = 1088
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnShow = FormShow
  PixelsPerInch = 96
  TextHeight = 13
  object DBGrid1: TDBGrid
    Left = 0
    Top = 0
    Width = 1088
    Height = 742
    Align = alClient
    Color = clMenu
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgConfirmDelete, dgCancelOnExit, dgTitleClick, dgTitleHotTrack]
    TabOrder = 0
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
    OnDblClick = DBGrid1DblClick
    Columns = <
      item
        Color = clMenu
        Expanded = False
        FieldName = 'GOROD_ILI_POSELOK'
        Title.Caption = #1052#1077#1089#1090#1086#1087#1086#1083#1086#1078#1077#1085#1080#1077
        Title.Color = clFuchsia
        Width = 123
        Visible = True
      end
      item
        Color = clMenu
        Expanded = False
        FieldName = 'ULICA'
        Title.Caption = #1059#1083#1080#1094#1072
        Title.Color = clFuchsia
        Width = 407
        Visible = True
      end>
  end
  object Panel1: TPanel
    Left = 56
    Top = 56
    Width = 401
    Height = 121
    Color = clMoneyGreen
    ParentBackground = False
    TabOrder = 1
    Visible = False
    object Label1: TLabel
      Left = 24
      Top = 13
      Width = 36
      Height = 13
      Caption = #1059#1083#1080#1094#1072
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label2: TLabel
      Left = 240
      Top = 13
      Width = 103
      Height = 13
      Caption = #1052#1077#1089#1090#1086#1087#1086#1083#1086#1078#1077#1085#1080#1077
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -11
      Font.Name = 'Tahoma'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Button1: TButton
      Left = 40
      Top = 80
      Width = 75
      Height = 25
      Caption = #1044#1086#1073#1072#1074#1080#1090#1100
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 280
      Top = 80
      Width = 75
      Height = 25
      Caption = #1054#1090#1084#1077#1085#1072
      TabOrder = 1
      OnClick = Button2Click
    end
    object Edit1: TEdit
      Left = 24
      Top = 32
      Width = 193
      Height = 21
      TabOrder = 2
    end
    object ComboBox1: TComboBox
      Left = 240
      Top = 32
      Width = 145
      Height = 21
      TabOrder = 3
      Text = #1043#1086#1088#1086#1076' '#1064#1072#1088#1100#1103
      Items.Strings = (
        #1043#1086#1088#1086#1076' '#1064#1072#1088#1100#1103
        #1055#1086#1089#1077#1083#1086#1082' '#1042#1077#1090#1083#1091#1078#1089#1082#1080#1081)
    end
  end
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=doc.mdb;Persist Sec' +
      'urity Info=False;'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 952
    Top = 368
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 864
    Top = 368
  end
  object DataSource1: TDataSource
    DataSet = ADOQuery1
    Left = 784
    Top = 392
  end
  object MainMenu1: TMainMenu
    Left = 760
    Top = 8
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N2: TMenuItem
        Caption = #1042#1099#1093#1086#1076
      end
    end
    object N3: TMenuItem
      Caption = #1059#1083#1080#1094#1072
      object N7: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N7Click
      end
    end
    object N4: TMenuItem
      Caption = #1046#1080#1090#1077#1083#1100
      object N5: TMenuItem
        Caption = #1042#1089#1077' '#1078#1080#1090#1077#1083#1080
        OnClick = N5Click
      end
      object N6: TMenuItem
        Caption = #1044#1086#1073#1072#1074#1080#1090#1100
        OnClick = N6Click
      end
    end
  end
end
