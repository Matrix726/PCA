export void conditional_multiply(
    uniform float input[], 
    uniform float output[], 
    uniform int size
) {
    foreach (i = 0 ... size) {
        if (input[i] > 0.0f) {  // Each lane checks its own condition
            output[i] = input[i] * 2.0f;
        } else {
            output[i] = input[i];  // No change if <= 0
        }
    }
}