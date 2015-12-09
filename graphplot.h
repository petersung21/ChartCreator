#ifndef GRAPHPLOT_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPointF>
#include <QVector>
#include <Math.h>
#include <stdlib.h>
#define GRAPHPLOT_H

using namespace std;

inline bool isInvalidData(double value)
{
    return qIsNaN(value) || qIsInf(value);
}

inline bool isInvalidData(double value1, double value2)
{
    return isInvalidData(value1) || isInvalidData(value2);
}



class graphplot
{
private:
    QVector <QPointF>* graphPoints;
public:
    graphplot();
    graphplot(QVector<QPointF>* points);
    void plotgraph();
};

#endif // GRAPHPLOT_H
