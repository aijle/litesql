/* LiteSQL 
 * 
 * The list of contributors at http://litesql.sf.net/ 
 * 
 * See LICENSE for copyright information. */
#ifndef _litesql_types_hpp
#define _litesql_types_hpp

/** \file types.hpp
    contains class Record and typedef Records */

#include <vector>
#include <string>

namespace litesql
{
class Database;
/** SQL data row wrapper. */
class Record : public std::vector<std::string>
{
public: 
    Record() : std::vector<std::string>() {}
    Record(size_t reserved) { reserve(reserved); }
};
/** shortcut */
typedef std::vector<Record> Records;

}

#endif
