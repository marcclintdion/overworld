GLfloat o11_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o11_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o11_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o11_VBO; 
GLuint o11_INDICES_VBO; 
//--------------------------------------
GLuint o11_EMIT; 
GLuint o11_DOT3; 
GLuint o11_SKY; 

GLuint o11_MASK0; 

//---------------------------------------------
GLfloat o11_boundingBox[6]; 


//---------------------------------------------
GLuint o11_INDEX_COUNT;    


GLuint o11_modelNumber;    


void load_o11_VBO(void)           
{
    #include    "o11_VBO.cpp"           
    glGenBuffers(1,              &o11_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o11_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o11), o11, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o11_INDICES(void)           
{
    #include    "o11_INDICES.cpp"           
    glGenBuffers(1,              &o11_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o11_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o11_INDICES), o11_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
