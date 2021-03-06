#pragma once

#include <algorithm>
#include <cstdint>

namespace util::rss {
  uintmax_t peak (void);
  uintmax_t current (void);
  bool limit (uintmax_t mem);
};
