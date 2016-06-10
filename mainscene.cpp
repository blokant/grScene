#include "mainscene.h"
//#include <QGraphicsScene>

MainScene::MainScene()
{

}

MainScene::MainScene(QObject *parent):QGraphicsScene(parent)
{
 //same as QGraphicsScene(parent), NO, you can not use QObject(parent);
}
