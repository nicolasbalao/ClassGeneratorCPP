#include "../includes/MainWindow.h"

// CONSTRUCTEUR
MainWindow::MainWindow() : QWidget()
{
    //! HBOXLAYOUT MAIN
    m_layoutMain = new QVBoxLayout;

    //?DEF CLASS
    m_groupDefClass = new QGroupBox;
    m_groupDefClass->setTitle("Définition de la classe");

    m_formDefClass = new QFormLayout;

    m_nomClass = new QLineEdit;
    m_classMere = new QLineEdit;

    m_formDefClass->addRow("&Nom:", m_nomClass);
    m_formDefClass->addRow("&Classe mere:", m_nomClass);

    m_groupDefClass->setLayout(m_formDefClass);

    //=================================================//
    //? OPTIONS
    m_groupDefOptions = new QGroupBox;
    m_groupDefOptions->setTitle("Options");

    m_layoutOption = new QVBoxLayout;

    m_multipleIclusion = new QCheckBox("Protéger le header contre les inclusions multiple");
    m_constructeur = new QCheckBox("Générer un contructeur par défaut");

    m_layoutOption->addWidget(m_multipleIclusion);
    m_layoutOption->addWidget(m_constructeur);

    m_groupDefOptions->setLayout(m_layoutOption);

    //=================================================//
    //?Ajouter commentaire

    m_groupRemark = new QGroupBox;
    m_groupRemark->setTitle("Ajouter Commentaires");
    m_groupRemark->setCheckable(true);
    m_groupRemark->setChecked(false);

    m_formRemark = new QFormLayout;

    m_auteur = new QLineEdit;
    m_date = new QDateEdit;
    m_textRemark = new QTextEdit;

    m_formRemark->addRow("&Auteur: ", m_auteur);
    m_formRemark->addRow("&Date: ", m_date);
    m_formRemark->addRow("&commentaire: ", m_textRemark);

    m_groupRemark->setLayout(m_formRemark);

    //=========================================//
    m_layoutButton = new QHBoxLayout;
    m_quitter = new QPushButton;
    m_genere = new QPushButton;

    m_quitter->setText("Quitter");
    m_genere->setText("Générer!");

    m_layoutButton->addWidget(m_quitter);
    m_layoutButton->addWidget(m_genere);

    //===================================//
    //! ADD TO MAIN LAYOUT
    m_layoutMain->addWidget(m_groupDefClass);
    m_layoutMain->addWidget(m_groupDefOptions);
    m_layoutMain->addWidget(m_groupRemark);
    m_layoutMain->addLayout(m_layoutButton);

    //* ADD LAYOUT TO THE WINDOW
    this->setLayout(m_layoutMain);
}