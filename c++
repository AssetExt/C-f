#pragma once

#include <cstdint>
#include <string>
namespace FFlagOffsets {
    inline std::string ClientVersion = "version-4b6315bf1f0a4dbb";

    namespace FFlagList {
         inline constexpr uintptr_t Pointer = 0x0;
         inline constexpr uintptr_t ToFlag = 0x30;
         inline constexpr uintptr_t ToValue = 0x0;
    }

}