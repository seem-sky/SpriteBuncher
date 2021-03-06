#ifndef CUSTOMSTYLESHEET_H
#define CUSTOMSTYLESHEET_H

//! Fairly basic 'dark' UI stylesheet, applied to the main widgets we use in the app. Test any changes across all OS -- they don't all behave the same.
const QString mainStyleSheet = "QWidget, QWidget *{ background: QLinearGradient(x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 rgb(64, 64, 64), stop: 1 rgb(120, 120, 120) );"
        "color: rgb(255, 255, 255);"
        "selection-background-color: rgb( 28, 120, 222 );"
        "}"

        "QListWidget, QListWidget *{ background: QLinearGradient(x1: 0, y1: 0, x2: 1, y2: 0, stop: 0 rgb(120, 120, 120), stop: 1 rgb(90, 90, 90) );"
        "color: rgb(255, 255, 255);"
        "}"

        "QLabel, QLabel *{ background: rgba(0, 0, 0, 0);"
        "color: rgb(255, 255, 255);"
        "}"
        "    QScrollBar:vertical  {"
        "     background: rbg(40,40,40);"
        "}"

        " QScrollBar::up-arrow:vertical, QScrollBar::down-arrow:vertical  {"
        "image: url(:/style1/images/down_arrow.png);"
        " width: 7px;"
        " height: 7px;"
        "}"
        "QScrollBar::up-arrow:vertical, QScrollBar::up-arrow:vertical  {"
        "image: url(:/style1/images/up_arrow.png);"
        " width: 7px;"
        " height: 7px;"
        "}"
        "QScrollBar::right-arrow:horizontal, QScrollBar::right-arrow:horizontal  {"
        "image: url(:/style1/images/right_arrow.png);"
        " width: 7px;"
        " height: 7px;"
        "}"
        "QScrollBar::left-arrow:horizontal, QScrollBar::left-arrow:horizontal  {"
        "image: url(:/style1/images/left_arrow.png);"
        " width: 7px;"
        " height: 7px;"
        "}"

        "QComboBox::down-arrow {"
        "image: url(:/style1/images/down_arrow.png);"
        "}"
        "QComboBox {"
        "border: 1px solid gray;"
        "border-radius: 0px;"
        "padding: 1px 18px 1px 3px;"
        "}"

        "QSpinBox, QDoubleSpinBox {"
        "background-color: #585858;"
        "}"
        "QSpinBox::up-arrow, QDoubleSpinBox::up-arrow {"
        " image: url(:/style1/images/up_arrow_sml.png);"
        "width: 7px;"
        "height: 7px;"
        "border: 0px;"
        "}"
        "QSpinBox::down-arrow, QDoubleSpinBox::down-arrow {"
        " image: url(:/style1/images/down_arrow_sml.png);"
        "width: 7px;"
        "height: 7px;"
        "border: 0px;"
        "}"

        "QPushButton {"
        "border: 2px solid rgb(60,60,60);"
        "border-style: outset;"
        "padding: 3px;"
        "border-radius: 1px;"
        "background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1 "
        "stop: 0 #505050, stop: 1 #585858 );"
        "min-width: 10px;"
        "}"
        "QPushButton:pressed {"
        "border: 2px solid rgb(60,60,60);"
        "border-style: outset;"
        "border-radius: 1px;"
         "padding: 3px;"
        " background-color: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1,"
        "stop: 0 #484848, stop: 1 #282828 );"
        "}"
        "QPushButton:flat {"
        "border: none; "
         "padding: 3px;"
        "background-color: none;"
        "}"

        "QCheckBox {"
        "border: none; "
        "background-color: none;"
        "}"

        "QSizeGrip { "
        "background:rgb(120,120,120);"
        "image: url(:/style1/images/sizegrip.png);"
        "width: 16px;"
        "height: 16px;"
        "}";

#endif // CUSTOMSTYLESHEET_H
