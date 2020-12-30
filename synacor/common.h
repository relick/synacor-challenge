#pragma once

#include <cstdint>
#include <cstddef>

#define USE_EXACT_NUMBER_TYPES 0

#if USE_EXACT_NUMBER_TYPES
using int8 = int8_t;
using int16 = int16_t;
using int32 = int32_t;
using int64 = int64_t;
using uint8 = uint8_t;
using uint16 = uint16_t;
using uint32 = uint32_t;
using uint64 = uint64_t;
#else
using int8 = int_fast8_t;
using int16 = int_fast16_t;
using int32 = int_fast32_t;
using int64 = int_fast64_t;
using uint8 = uint_fast8_t;
using uint16 = uint_fast16_t;
using uint32 = uint_fast32_t;
using uint64 = uint_fast64_t;
#endif

using isize = intptr_t;
using usize = uintptr_t;