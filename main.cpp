#include <QApplication>
#include <QMainWindow>
#include <QWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QGroupBox>
#include <QPushButton>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMainWindow window;

    QWidget *widget = new QWidget(&window);
    QVBoxLayout *layout = new QVBoxLayout(widget);

    QGroupBox *box = new QGroupBox("Information", widget);
    layout->addWidget(box);

    QVBoxLayout *vlayout = new QVBoxLayout(box);

    QWidget *nameWidget = new QWidget(box);
    QHBoxLayout *hNamelayout = new QHBoxLayout(nameWidget);
    QLabel *nameLabel = new QLabel("Name    : ", nameWidget);
    QLineEdit *nameEdit = new QLineEdit(nameWidget);
    hNamelayout->addWidget(nameLabel);
    hNamelayout->addWidget(nameEdit);

    QWidget *ageWidget = new QWidget(box);
    QHBoxLayout *hAgeLayout = new QHBoxLayout(ageWidget);
    QLabel *ageLabel = new QLabel("Age     : ", ageWidget);
    QLineEdit *ageEdit = new QLineEdit(ageWidget);
    hAgeLayout->addWidget(ageLabel);
    hAgeLayout->addWidget(ageEdit);

    QWidget *addressWidget = new QWidget(box);
    QHBoxLayout *hAddresLayout = new QHBoxLayout(addressWidget);
    QLabel *addressLabel = new QLabel("Address : ", addressWidget);
    QLineEdit *addressEdit = new QLineEdit(addressWidget);
    hAddresLayout->addWidget(addressLabel);
    hAddresLayout->addWidget(addressEdit);

    vlayout->addWidget(nameWidget);
    vlayout->addWidget(ageWidget);
    vlayout->addWidget(addressWidget);

    QWidget *pushBtnWidget = new QWidget(widget);
    QHBoxLayout *hbtnlayout = new QHBoxLayout(pushBtnWidget);
    layout->addWidget(pushBtnWidget);

    QPushButton *btn1 = new QPushButton("Validate");
    QPushButton *btn2 = new QPushButton("Reset");
    QPushButton *btn3 = new QPushButton("Cancel");

    hbtnlayout->addWidget(btn1);
    hbtnlayout->addWidget(btn2);
    hbtnlayout->addWidget(btn3);


    widget->setLayout(layout);
    window.setCentralWidget(widget);
    window.setFixedSize(400, 250);
    window.setWindowTitle("Details");
    window.show();
    return a.exec();
}
