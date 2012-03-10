#ifndef DATA_POOL_H
#define DATA_POOL_H

#include "types/Value.h"
#include "types/Bool.h"
#include "types/Nil.h"
#include "types/Number.h"
#include "types/String.h"
#include "types/Table.h"
#include "types/Function.h"
#include <string>

namespace lua
{
    class DataPool
    {
    public:
        DataPool();

        Nil * GetNil();
        Bool * GetTrue();
        Bool * GetFalse();
        Number * GetNumber(double number);
        String * GetString(const std::string& str);
        Table * GetTable();
        Function * GetFunction();

    private:
        Nil nil_;
        Bool true_;
        Bool false_;
    };
} // namespace lua

#endif // DATA_POOL_H
