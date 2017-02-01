uniform float u_angle;
uniform float u_pitch;
uniform vec2 u_resolution;

#define PI 3.14159

void main() {
    vec4 YELLOW = vec4(1.0, 1.0, 0.0, 1.0);
    vec4 PINK = vec4(1.0, 0.0, 1.0, 1.0);
    
    vec2 pos = gl_FragCoord.xy;
    vec2 uv = pos / u_resolution;
    
    float phase = uv.x * cos(u_angle) + uv.y * sin(u_angle);
    vec4 result = vec4(0.0);
    sin(phase * u_resolution.y * PI / u_pitch) > 0.0 ? result = YELLOW : result = PINK;
    result = vec4(0.0, 1.0, 0.0, 1.0);
    gl_FragColor = result;
}
