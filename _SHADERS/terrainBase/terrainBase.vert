#define highp                                                                                                      

attribute           vec4    position;
attribute           vec3    normal;
attribute           vec2    uv0;

uniform             mat4    projectionMatrix;

uniform     highp   vec3    setPosition;

varying     highp   vec2    uv0_PASS;




void main()
{                                                                                                                  

    uv0_PASS                =   uv0;

   
    
    
    
    highp vec4 tempPos      =   position;
   
    
    //tempPos                 =   tempPos - highp vec4( setPosition.x,  setPosition.y,  setPosition.z,  0.0);
    
    
    gl_Position             =   projectionMatrix * (tempPos - highp vec4( setPosition.x,  setPosition.y,  setPosition.z,  0.0)    );

    
  
   


}