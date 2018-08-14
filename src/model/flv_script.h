// Copyright (c) 2018 winking324
//


#pragma once  // NOLINT(build/header_guard)


#include <inttypes.h>
#include <string>

#include "model/flv_data.h"


namespace flv_parser {


enum ScriptDataValueType {
  SCRIPT_DATA_NUMBER = 0,
  SCRIPT_DATA_BOOLEAN = 1,
  SCRIPT_DATA_STRING = 2,
  SCRIPT_DATA_OBJECT = 3,
  SCRIPT_DATA_MOVIE_CLIP = 4,
  SCRIPT_DATA_NULL = 5,
  SCRIPT_DATA_UNDEFINED = 6,
  SCRIPT_DATA_REFERENCE = 7,
  SCRIPT_DATA_ECMA_ARRAY = 8,
  SCRIPT_DATA_OBJECT_END_MARKER = 9,
  SCRIPT_DATA_STRICT_ARRAY = 10,
  SCRIPT_DATA_DATE = 11,
  SCRIPT_DATA_LONG_STRING = 12,
};


class FlvScript : public FlvData {
 public:
  FlvScript();

  ~FlvScript();

  virtual size_t ParseData(const std::string &data, size_t pos, size_t length);

 private:
  uint8_t name_type_;
  uint8_t value_type_;
};


}  // namespace flv_parser
