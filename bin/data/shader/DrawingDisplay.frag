uniform float u_angle;
uniform float u_pitch;
uniform vec2 u_resolution;
uniform sampler2DRect u_tex0;
uniform sampler2DRect u_tex1;
uniform sampler2DRect u_tex2;
uniform sampler2DRect u_tex3;
uniform sampler2DRect u_tex4;
uniform sampler2DRect u_tex5;
uniform sampler2DRect u_tex6;
uniform sampler2DRect u_tex7;
uniform sampler2DRect u_tex8;
uniform sampler2DRect u_tex9;
uniform sampler2DRect u_tex10;
uniform sampler2DRect u_tex11;
uniform sampler2DRect u_tex12;
uniform sampler2DRect u_tex13;
uniform sampler2DRect u_tex14;

#define PI 3.14159
#define SAMPLE_NUM 15.0

void main() {
    vec2 pos = gl_FragCoord.xy;
    vec2 uv = pos / u_resolution;
    
    float phase = uv.x * cos(u_angle) + uv.y * sin(u_angle);
    vec4 result = vec4(0.0, 1.0, 0.0, 1.0);
    
    // 0.0 ~ 1.0 * SAMPLE_NUM
    float target = floor((1.0 + cos(phase * u_resolution.y * PI / u_pitch)) / 2.0 * SAMPLE_NUM);
    
    if (floor(mod(target, SAMPLE_NUM)) == 0.0) {
        result = texture2DRect(u_tex0, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 1.0) {
        result = texture2DRect(u_tex1, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 2.0) {
        result = texture2DRect(u_tex2, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 3.0) {
        result = texture2DRect(u_tex3, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 4.0) {
        result = texture2DRect(u_tex4, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 5.0) {
        result = texture2DRect(u_tex5, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 6.0) {
        result = texture2DRect(u_tex6, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 7.0) {
        result = texture2DRect(u_tex7, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 8.0) {
        result = texture2DRect(u_tex8, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 9.0) {
        result = texture2DRect(u_tex9, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 10.0) {
        result = texture2DRect(u_tex10, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 11.0) {
        result = texture2DRect(u_tex11, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 12.0) {
        result = texture2DRect(u_tex12, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 13.0) {
        result = texture2DRect(u_tex13, pos);
    } else if (floor(mod(target, SAMPLE_NUM)) == 14.0) {
        result = texture2DRect(u_tex14, pos);
    }
    gl_FragColor = result;
}
