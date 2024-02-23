#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void handleButton();

private:
    QPushButton *m_button;
    QLabel *m_label;
    QVBoxLayout *m_layout;
    int m_count;

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
