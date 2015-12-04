#include "mainwindow.h"
#include <QApplication>

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QPointF>
#include <QVector>
#include <Math.h>
#include "graphplot.h"

int main(int argc, char *argv[])
{
        QApplication a(argc, argv);


        graphplot * graph = new graphplot();

        graph->plotgraph();

        // or add the view to the layout inside another widget

        return a.exec();
}
