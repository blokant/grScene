#ifndef MAINSCENE_H
#define MAINSCENE_H

#include <QObject>
//class QGraphicsScene;
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>
class MainScene : public QGraphicsScene
{
    Q_OBJECT
public:
    MainScene();
    MainScene(QObject* parent);
    void populateScene();
    void mouseReleaseEvent(QGraphicsSceneMouseEvent *event);
};

#endif // MAINSCENE_H
