#ifndef COURSE_PROJECT_HANDLER_H
#define COURSE_PROJECT_HANDLER_H
#include "iostream"
#include "../command/command.h"

#include <iostream>

class handler
{

public:

    handler* _next_handler;

public:

    handler() : _next_handler(nullptr)
    {

    }

    virtual ~handler() = default;

public:

    virtual bool handle(std::string const &request, std::int64_t data_and_time) = 0;

};

#endif //COURSE_PROJECT_HANDLER_H
