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
uniform sampler2DRect u_tex15;
uniform sampler2DRect u_tex16;
uniform sampler2DRect u_tex17;
uniform sampler2DRect u_tex18;
uniform sampler2DRect u_tex19;
uniform sampler2DRect u_tex20;
uniform sampler2DRect u_tex21;
uniform sampler2DRect u_tex22;
uniform sampler2DRect u_tex23;
uniform sampler2DRect u_tex24;
uniform sampler2DRect u_tex25;
uniform sampler2DRect u_tex26;
uniform sampler2DRect u_tex27;
uniform sampler2DRect u_tex28;
uniform sampler2DRect u_tex29;
uniform sampler2DRect u_tex30;
uniform sampler2DRect u_tex31;

#define PI 3.14159
#define SAMPLE_NUM 8.0

void main() {
    vec2 pos = gl_FragCoord.xy;
    vec2 uv = pos / u_resolution;
    
    float phase = uv.x * cos(u_angle) + uv.y * sin(u_angle);
    float check = sin(phase * u_resolution.y * PI / u_pitch);
//    vec4 result = vec4(0.0, 1.0, 0.0, 1.0);
    
    //    check > 0.0 ? result = texture2DRect(u_tex0, pos) : result = texture2DRect(u_tex1, pos);
    
    
    float target = mod(phase * u_resolution.y / u_pitch, 1.0) * SAMPLE_NUM;
    if (mod(target, SAMPLE_NUM) >= 0.0 && mod(target, SAMPLE_NUM) < 1.0) {
        result = texture2DRect(u_tex0, pos);
    } else if (mod(target, SAMPLE_NUM) >= 1.0 && mod(target, SAMPLE_NUM) < 2.0) {
        result = texture2DRect(u_tex1, pos);
    } else if (mod(target, SAMPLE_NUM) >= 2.0 && mod(target, SAMPLE_NUM) < 3.0) {
        result = texture2DRect(u_tex2, pos);
    } else if (mod(target, SAMPLE_NUM) >= 3.0 && mod(target, SAMPLE_NUM) < 4.0) {
        result = texture2DRect(u_tex3, pos);
    } else if (mod(target, SAMPLE_NUM) >= 4.0 && mod(target, SAMPLE_NUM) < 5.0) {
        result = texture2DRect(u_tex4, pos);
    } else if (mod(target, SAMPLE_NUM) >= 5.0 && mod(target, SAMPLE_NUM) < 6.0) {
        result = texture2DRect(u_tex5, pos);
    } else if (mod(target, SAMPLE_NUM) >= 6.0 && mod(target, SAMPLE_NUM) < 7.0) {
        result = texture2DRect(u_tex6, pos);
    } else if (mod(target, SAMPLE_NUM) >= 7.0 && mod(target, SAMPLE_NUM) < 8.0) {
        result = texture2DRect(u_tex7, pos);
    }
    
    
    //    float target = phase * u_resolution.y / u_pitch;
    //    if (mod(target, SAMPLE_NUM) >= 0.0 && mod(target, SAMPLE_NUM) < 1.0) {
    //        result = texture2DRect(u_tex0, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 1.0 && mod(target, SAMPLE_NUM) < 2.0) {
    //        result = texture2DRect(u_tex1, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 2.0 && mod(target, SAMPLE_NUM) < 3.0) {
    //        result = texture2DRect(u_tex2, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 3.0 && mod(target, SAMPLE_NUM) < 4.0) {
    //        result = texture2DRect(u_tex3, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 4.0 && mod(target, SAMPLE_NUM) < 5.0) {
    //        result = texture2DRect(u_tex4, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 5.0 && mod(target, SAMPLE_NUM) < 6.0) {
    //        result = texture2DRect(u_tex5, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 6.0 && mod(target, SAMPLE_NUM) < 7.0) {
    //        result = texture2DRect(u_tex6, pos);
    //    } else if (mod(target, SAMPLE_NUM) >= 7.0 && mod(target, SAMPLE_NUM) < 8.0) {
    //        result = texture2DRect(u_tex7, pos);
    //    }
    
    //    result = vec4(mod(target, SAMPLE_NUM) / SAMPLE_NUM, 0.0, 0.0, 1.0);
    
    gl_FragColor = result;
}
