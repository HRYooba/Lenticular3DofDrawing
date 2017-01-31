uniform float u_angle;

void main() {
    vec2 pos = gl_FragCoord.xy;
    
    // b = y - a * x
    vec4 result = vec4(0.0);
    float a = tan(u_angle);
    float b = pos.y - a * pos.x;
    
    // 四捨五入
//    float decimals = b - b / 1.0;
//    float trueb = 0.0;
//    if (decimals >= 0.5) {
//        trueb = b / 1.0 + 1.0;
//    } else {
//        trueb = b / 1.0;
//    }
    
    // 何色か決定
//    if (mod(b, 2.0) == 0.0) {
//        result = vec4(1.0, 0.0, 1.0, 1.0);
//    } else {
//        result = vec4(1.0, 1.0, 0.0, 1.0);
//    }
//    result = vec4(b, 0.0, 0.0, 1.0);
    result = vec4(mix(vec3(1.0, 0.0, 1.0), vec3(1.0, 1.0, 0.0), mod(b, 2.0)), 1.0);
    
    gl_FragColor = result;
}
