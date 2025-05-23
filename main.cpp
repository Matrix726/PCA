#include <iostream>
#include "conditional_ispc.h"  // Generated by ISPC
#include "loop_ispc.h"

int main() {
    const int N = 8;
    float input[N] = {1.0f, -2.0f, 3.0f, -4.0f, 5.0f, -6.0f, 7.0f, -8.0f};
    float output_conditional[N] = {0};
    float output_loop[N] = {0};

    // Call ISPC functions
    ispc::conditional_multiply(input, output_conditional, N);
    ispc::loop_example(input, output_loop, N);

    // Print results
    std::cout << "Conditional Output:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << output_conditional[i] << " ";
    }

    std::cout << "\nLoop Output:\n";
    for (int i = 0; i < N; ++i) {
        std::cout << output_loop[i] << " ";
    }

    return 0;
}