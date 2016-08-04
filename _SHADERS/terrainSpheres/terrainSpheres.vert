#define highp                                                                                                      

attribute           vec4    position;
attribute           vec3    normal;
attribute           vec2    uv0;

uniform             mat4    projectionMatrix;
uniform             mat4    invertViewMatrix;

uniform     highp   vec3    setPosition;

uniform     highp   float   scale;

uniform     highp   float   f_0;

varying     highp   vec4    light0_posPASS;
varying     highp   vec3    vertNormalPASS;

varying     highp   vec2    uv0_PASS;

            highp   vec4    tempNormal;
            highp   vec4    tempPos;

void main()
{                                                                                                                  

    uv0_PASS                =   uv0;

    tempNormal              =   highp vec4(normal, 0.0);
    
    light0_posPASS          =   invertViewMatrix * highp vec4(0.0, 0.0,  1.0, 0.0);
    vertNormalPASS          =   normal;
    
    tempPos                 =   position;
   

//* ((tempPos + (highp vec4(normalize(normal), 0.0) * scale)-highp vec4(normalize(normal), 0.0)) - highp vec4( setPosition.x,  setPosition.y,  setPosition.z,  0.0));
    
  
    tempPos                 =   (((tempPos + highp vec4(normal, 0.0) * scale) - highp vec4(normal, 0.0)*.5) - highp vec4( setPosition.x,  setPosition.y,  -setPosition.z,  0.0));
    

    gl_Position             =   projectionMatrix * tempPos;

    
  
   


}