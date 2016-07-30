GLfloat o10_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o10_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o10_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o10_VBO; 
GLuint o10_INDICES_VBO; 
//--------------------------------------
GLuint o10_EMIT; 
GLuint o10_DOT3; 
GLuint o10_SKY; 

GLuint o10_MASK0; 

//---------------------------------------------
GLfloat o10_boundingBox[6]; 


//---------------------------------------------
GLuint o10_INDEX_COUNT;    


GLuint o10_modelNumber;    


void load_o10_VBO(void)           
{
    #include    "o10_VBO.cpp"           
    glGenBuffers(1,              &o10_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o10_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o10), o10, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o10_INDICES(void)           
{
    #include    "o10_INDICES.cpp"           
    glGenBuffers(1,              &o10_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o10_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o10_INDICES), o10_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
