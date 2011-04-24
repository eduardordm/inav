#include "info.h"


#include <QPainter>

Info::Info(QWidget* parent) : Canvas(parent)
{
    font = QFont("Arial Black", INFO_FONTSIZE);
    font.setWeight(QFont::Black );
    font.setBold(true);
    font.setStretch(90);
}

Info::~Info()
{
}

// TODO: path, cores, etc colocar c membros da classe
// ver se deixar assim nao fica mais facil evitar memleak (vai usar escopo e destrutor)
void Info::paintEvent(QPaintEvent*)
{
    QPointF baseline_title(0, INFO_FONTSIZE);
    QPointF baseline_text(10, INFO_FONTSIZE*2+INFO_LINESPACING);

    QPainter painter(this);

    painter.setRenderHint(QPainter::Antialiasing);

    painter.setBrush(Qt::darkGray);
    painter.setPen(Qt::black);
    QPainterPath path_title;
    path_title.addText(baseline_title, font, title);
    painter.drawPath(path_title);

    painter.setBrush(Qt::white);
    painter.setPen(Qt::darkGray);
    QPainterPath path_text;
    path_text.addText(baseline_text, font, text);
    painter.drawPath(path_text);

}
