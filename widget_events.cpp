// widget_events.cpp
#include "widget_events.hpp"
#include <iostream>

bool WidgetEvent::event(QEvent *event)
{
    std::cout << event->type() << std::endl;
    return true;
}
