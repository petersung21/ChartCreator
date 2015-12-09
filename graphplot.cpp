#include "graphplot.h"

graphplot::graphplot()
{
    graphplot::graphPoints = new QVector<QPointF>();
}

graphplot::graphplot(QVector<QPointF>* points)
{
    graphplot::graphPoints = points;
}

void graphplot::plotgraph()
{
    // Fill in points with n number of points
    for(int i = 0; i< 100; i++){
            graphplot::graphPoints->append(QPointF(i*5, i*5));
    }

    // Create a view, put a scene in it and add tiny circles
    // in the scene
    QGraphicsView * view = new QGraphicsView();
    QGraphicsScene * scene = new QGraphicsScene();
    view->setScene(scene);

    for(int i = 0; i< graphplot::graphPoints->size(); i++)
        scene->addEllipse(graphplot::graphPoints->at(i).x(), graphplot::graphPoints->at(i).y(), 1, 1);


    scene->setSceneRect(0,0,500,500);
    // Show the view
    view->show();
}

