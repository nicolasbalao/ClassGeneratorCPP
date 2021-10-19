#include "../includes/MainWindow.h"

// CONSTRUCTEUR
MainWindow::MainWindow() : QWidget()
{
    //! HBOXLAYOUT MAIN
    m_layoutMain = new QHBoxLayout;

    //?DEF CLASS
    ////GROUP BOX
    m_groupDefClass = new QGroupBox;
    m_groupDefClass->setTitle("Définition de la classe");

    ////FORM
    m_formDefClass = new QFormLayout;

    ////LINE EDIT
    m_nomClass = new QLineEdit;
    m_classMere = new QLineEdit;

    //// ADD LINE EDIT FORM
    m_formDefClass->addRow("&Nom:", m_nomClass);
    m_formDefClass->addRow("&Classe mere:", m_nomClass);

    ////ADD FORM TO GROUPE
    m_groupDefClass->setLayout(m_formDefClass);

    //===================================//
    //! ADD TO MAIN LAYOUT
    m_layoutMain->addWidget(m_groupDefClass);

    //* ADD LAYOUT TO THE WINDOW
    this->setLayout(m_layoutMain);
}