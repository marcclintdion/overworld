GLfloat o16_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o16_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o16_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o16_VBO; 
GLuint o16_INDICES_VBO; 
//--------------------------------------
GLuint o16_EMIT; 
GLuint o16_DOT3; 
GLuint o16_SKY; 

GLuint o16_MASK0; 

//---------------------------------------------
GLfloat o16_boundingBox[6]; 


//---------------------------------------------
GLuint o16_INDEX_COUNT;    


GLuint o16_modelNumber;    


void load_o16_VBO(void)           
{
    #include    "o16_VBO.cpp"           
    glGenBuffers(1,              &o16_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o16_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o16), o16, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o16_INDICES(void)           
{
    #include    "o16_INDICES.cpp"           
    glGenBuffers(1,              &o16_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o16_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o16_INDICES), o16_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
