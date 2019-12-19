#ifndef ARTOUR_COMPILER_OPTIONS_H
#define ARTOUR_COMPILER_OPTIONS_H

#include <stddef.h>

namespace art {
    class CompilerOptions {
    private:
        void* compiler_filter_;
        size_t huge_method_threshold_;
        size_t large_method_threshold_;
        size_t small_method_threshold_;
        size_t tiny_method_threshold_;
        size_t num_dex_methods_threshold_;
        size_t inline_depth_limit_;
        size_t inline_max_code_units_;

        size_t getInlineMaxCodeUnitsOffset();

    public:
        size_t getInlineMaxCodeUnits();
        bool setInlineMaxCodeUnits(size_t units);

        bool disableJitInline();
    };
}

#endif //ARTOUR_COMPILER_OPTIONS_H
