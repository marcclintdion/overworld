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




void main()
{

    colorTexture            =   texture2D(ColorMAP, uv0_PASS);
    
    
    
    gl_FragColor.xyz        =   pow(    colorTexture.xyz   ,   highp vec3(1.0/2.2, 1.0/2.2, 1.0/2.2)    ) * highp vec3(1.0, 0.9425360, 0.8515444)   ;

    
    
    
    gl_FragColor.a          =   colorTexture.a;
  
  
}
















