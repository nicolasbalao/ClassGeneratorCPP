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
    -GroupeBox avec un check box : groupCommentaire
        - FormLayout: formCommentaire
            - Auteur:
            -Date de création: date picker
            -Role de la classe: Grand text


*/

#ifndef DEF_MAINWINDOW
#define DEF_MAINWINDOW

#include <QWidget>
#include <QApplication>
#include <QHBoxLayout>
#include <QGroupBox>
#include <QFormLayout>
#include <QLineEdit>

class MainWindow : public QWidget
{
protected:
    QHBoxLayout *m_layoutMain; // layout de toute la fenêtre
    // DEF CLASS
    QGroupBox *m_groupDefClass;
    QFormLayout *m_formDefClass;
    QLineEdit *m_nomClass;
    QLineEdit *m_classMere;

    // OPTIONS

public:
    MainWindow();
};

#endif