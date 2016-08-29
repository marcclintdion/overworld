 #ifdef GL_ES                                                                                                                                              
 #else                                                                                                                                                     
 #define highp                                                                                                                                             
 #endif                                                                                                                                                    


varying     highp   vec2    uv0_PASS;

uniform     sampler2D       ColorMAP;
            highp   vec4    colorTexture;


uniform     highp   float   f_0;
uniform     highp   float   f_1;
uniform     highp   float   f_2;
uniform     highp   float   f_3;
uniform     highp   float   f_4;
uniform     highp   float   f_5;

varying     highp   vec4    light0_posPASS;
varying     highp   vec3    vertNormalPASS;

            highp   float   VnDotL;

void main()
{

    colorTexture            =   texture2D(ColorMAP, uv0_PASS);
    
    
    VnDotL                  =   max(dot(vertNormalPASS, light0_posPASS.xyz) , 0.0);
    
    
    gl_FragColor.xyz        =   colorTexture.xyz    * highp vec3(0.7, 0.9, 1.0)    ;

    
    gl_FragColor.a          =     (1.0 - VnDotL);
  
  
}
















