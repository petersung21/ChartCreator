#include "graphplot.h"

graphplot::graphplot()
{
    graphplot::graphPoints = new QVector<QPointF>();
}

graphplot::graphplot(vector<int>* points)
{
    //graphplot::graphPoints = points;
}

void graphplot::plotgraph()
{
    // Fill in points with n number of points
    for(int i = 0; i< 100; i++){
            graphplot::graphPoints->append(QPointF(i, -i*i));
    }

    // Create a view, put a scene in it and add tiny circles
    // in the scene
    QGraphicsView * view = new QGraphicsView();
    QGraphicsScene * scene = new QGraphicsScene();
    view->setScene(scene);

    for(int i = 0; i< graphplot::graphPoints->size(); i++)
        scene->addEllipse(graphplot::graphPoints->at(i).x(), graphplot::graphPoints->at(i).y(), 1, 1);

    // Show the view
    view->show();
}

