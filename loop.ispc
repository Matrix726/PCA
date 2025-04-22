export void loop_example(
    uniform float a[], 
    uniform float b[], 
    uniform int size
) {
    foreach (i = 0 ... size) {
        float sum = 0.0f;
        for (uniform int j = 0; j < 4; ++j) {  // Each lane runs this loop
            sum += a[i] * j;
        }
        b[i] = sum;
    }
}