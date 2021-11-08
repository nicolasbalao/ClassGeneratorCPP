/*
Créateur: Nicolas Balao

Description Fentre:
-HboxLayout: layoutMain
    -GroupBox: groupDefClass
        -FormLayout: formClass
            nom
            classe mere
    -GroupeBox: groupOption
        -FormLayout: formOption
            - check Box: protégé le header...
            -check box: générer un constructeur
            -check box: générer un destructeur
    -GroupeBox avec un check box : groupremarkaire
        - FormLayout: formCommentaire
            - Auteur:
            -Date de création: date picker
            -Role de la classe: Grand text


*/

#ifndef DEF_MAINWINDOW
#define DEF_MAINWINDOW

#include <QWidget>
#include <QApplication>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QFormLayout>
#include <QLineEdit>
#include <QCheckBox>
#include <QDateEdit>
#include <QTextEdit>
#include <QHBoxLayout>
#include <QPushButton>

class MainWindow : public QWidget
{
protected:
    QVBoxLayout *m_layoutMain; // layout de toute la fenêtre
    // DEF CLASS
    QGroupBox *m_groupDefClass;
    QFormLayout *m_formDefClass;
    QLineEdit *m_nomClass;
    QLineEdit *m_classMere;

    // OPTIONS
    QGroupBox *m_groupDefOptions;
    QVBoxLayout *m_layoutOption;
    QCheckBox *m_multipleIclusion;
    QCheckBox *m_constructeur;

    //remark
    QGroupBox *m_groupRemark;
    QFormLayout *m_formRemark;
    QLineEdit *m_auteur;
    QDateEdit *m_date;
    QTextEdit *m_textRemark;

    //button
    QHBoxLayout *m_layoutButton;
    QPushButton *m_quitter;
    QPushButton *m_genere;

public:
    MainWindow();
};

#endif