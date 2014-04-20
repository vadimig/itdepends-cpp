#ifndef PRESCRIPTION_H
#define PRESCRIPTION_H

#include "Work1.h"
#include "Work2.h"
#include "Work3.h"
#include "../../inject.hpp"

inject_as_share(IWork, Work1)
inject_as_singleton(Work2, Work2, 1)
inject_as_object(Work3, Work3, 1, true)

#endif