// widget_events.hpp
#ifndef WIDGET_EVENTS_H
#define WIDGET_EVENTS_H

#include <QWidget>
#include <QEvent>

class WidgetEvent : public QWidget
{
protected:
    bool event(QEvent *event) override;
};


#endif
