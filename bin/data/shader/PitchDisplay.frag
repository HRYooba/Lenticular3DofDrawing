uniform float u_angle;
uniform float u_pitch;
uniform vec2 u_resolution;

#define PI 3.14159
#define SAMPLE_NUM 2.0


void main() {
    vec4 YELLOW = vec4(1.0, 1.0, 0.0, 1.0);
    vec4 PINK = vec4(1.0, 0.0, 1.0, 1.0);
    
    vec2 pos = gl_FragCoord.xy;
    vec2 uv = pos / u_resolution;
    
    float phase = uv.x * cos(u_angle) + uv.y * sin(u_angle);
    vec4 result = vec4(0.0);
    
    // 0.0 ~ 1.0 * SAMPLE_NUM
    float target = (1.0 + cos(phase * u_resolution.y * PI / u_pitch)) / 2.0 * SAMPLE_NUM;
    if (mod(target, SAMPLE_NUM) >= 0.0 && mod(target, SAMPLE_NUM) < 1.0) {
        result = YELLOW;
    } else if (mod(target, SAMPLE_NUM) >= 1.0 && mod(target, SAMPLE_NUM) <= 2.0) {
        result = PINK;
    }
    
    gl_FragColor = result;
}
