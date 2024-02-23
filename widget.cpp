#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    , m_count(0)
{
    m_button = new QPushButton("Click Here",this);
    m_label = new QLabel;
    m_layout = new QVBoxLayout(this);

    m_label->setNum(m_count);

    m_layout->addWidget(m_button);
    m_layout->addWidget(m_label);

    ui->setupUi(this);

    connect(m_button, SIGNAL (clicked()), this, SLOT (handleButton()));
}

void Widget::handleButton()
{
    m_label->setNum(++m_count);
}

Widget::~Widget()
{
    delete ui;
}

