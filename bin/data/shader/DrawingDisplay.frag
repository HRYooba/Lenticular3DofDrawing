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

void main() {
    vec2 pos = gl_FragCoord.xy;
    vec2 uv = pos / u_resolution;
    
    // turn = 0.0 or 1.0
    float phase = uv.x * cos(u_angle) + uv.y * sin(u_angle);
    vec4 result = vec4(0.0);
    float turn = 0.0;
    
    sin(phase * u_resolution.y * PI / u_pitch) > 0.0 ? turn = 0.0 : turn = 1.0;
    
    if (turn == 0.0) {
        result = texture2DRect(u_tex0, pos);
    } else {
        result = texture2DRect(u_tex1, pos);
    }
    
    gl_FragColor = result;
}
