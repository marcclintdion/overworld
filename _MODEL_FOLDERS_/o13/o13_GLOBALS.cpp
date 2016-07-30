GLfloat o13_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o13_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o13_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o13_VBO; 
GLuint o13_INDICES_VBO; 
//--------------------------------------
GLuint o13_EMIT; 
GLuint o13_DOT3; 
GLuint o13_SKY; 

GLuint o13_MASK0; 

//---------------------------------------------
GLfloat o13_boundingBox[6]; 


//---------------------------------------------
GLuint o13_INDEX_COUNT;    


GLuint o13_modelNumber;    


void load_o13_VBO(void)           
{
    #include    "o13_VBO.cpp"           
    glGenBuffers(1,              &o13_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o13_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o13), o13, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o13_INDICES(void)           
{
    #include    "o13_INDICES.cpp"           
    glGenBuffers(1,              &o13_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o13_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o13_INDICES), o13_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
