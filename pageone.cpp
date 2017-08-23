#include "pageone.h"
#include "wizard.h"

PageOne::PageOne(QWidget *parent) : QWidget(parent)
{
    QTabWidget *tabWidget = new QTabWidget(this);

    customTab(tabWidget);
    templateTab(tabWidget);

    tabWidget->setStyleSheet("QTabWidget::pane {border: 0;}");

    tabWidget->setMinimumSize(400, 400);
}





void PageOne::customTab(QTabWidget *tabWidget)
{
    nameEdit = new QLineEdit;
    dateEdit = new QDateEdit;
    heightEdit = new QSpinBox;
    widthEdit = new QSpinBox;
    positionEdit = new QSpinBox;
    materialEdit = new QComboBox;
    QWidget *customWindow = new QWidget;

    heightEdit->setRange(1, 8);
    widthEdit->setRange(1, 8);
    positionEdit->setRange(1, 4);
    materialEdit->addItem("Calcium Carbonate");
    materialEdit->addItem("HPR");
    materialEdit->addItem("ABTS");
    dateEdit->setDate(QDate::currentDate());

    QFormLayout *formLayout = new QFormLayout;

    formLayout->addRow("&Name:", nameEdit);
    formLayout->addRow("&Date:", dateEdit);
    formLayout->addRow("&Width:", widthEdit);
    formLayout->addRow("&Height:", heightEdit);
    formLayout->addRow("&Position:", positionEdit);
    formLayout->addRow("&Material:", materialEdit);

    customWindow->setLayout(formLayout);
    tabWidget->addTab(customWindow, "Custom");
}





void PageOne::templateTab(QTabWidget *tabWidget)
{
    QHBoxLayout *layout = new QHBoxLayout;
    QWidget *templateWindow = new QWidget;
    QTextEdit *edit = new QTextEdit;
    layout->addWidget(edit);
    edit->setMinimumSize(300,280);
    templateWindow->setLayout(layout);
    tabWidget->addTab(templateWindow, "Template");
}
