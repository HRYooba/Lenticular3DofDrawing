uniform float u_angle;
uniform vec2 u_resolution;

#define PI 3.14159

void main() {
    vec2 pos = gl_FragCoord.xy;
    vec2 uv = pos / u_resolution;
    
    float phase = uv.x * cos(u_angle) + uv.y * sin(u_angle);
    vec4 result = vec4(0.0, 0.0, 0.0, 1.0);
    sin(phase) > 0.0 && sin(phase) < 0.001 ? result = vec4(1.0) : result = vec4(0.0, 0.0, 0.0, 1.0);
    gl_FragColor = result;
}
