#ifndef GRAPHPLOT_H
#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPointF>
#include <QVector>
#include <Math.h>
#include <stdlib.h>
#define GRAPHPLOT_H

using namespace std;

class graphplot
{
private:
    QVector <QPointF>* graphPoints;
public:
    graphplot();
    graphplot(vector<int>* points);
    void plotgraph();
};

#endif // GRAPHPLOT_H
