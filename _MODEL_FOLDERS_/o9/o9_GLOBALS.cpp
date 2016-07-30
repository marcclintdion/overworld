GLfloat o9_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o9_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o9_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o9_VBO; 
GLuint o9_INDICES_VBO; 
//--------------------------------------
GLuint o9_EMIT; 
GLuint o9_DOT3; 
GLuint o9_SKY; 

GLuint o9_MASK0; 

//---------------------------------------------
GLfloat o9_boundingBox[6]; 


//---------------------------------------------
GLuint o9_INDEX_COUNT;    


GLuint o9_modelNumber;    


void load_o9_VBO(void)           
{
    #include    "o9_VBO.cpp"           
    glGenBuffers(1,              &o9_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o9_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o9), o9, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o9_INDICES(void)           
{
    #include    "o9_INDICES.cpp"           
    glGenBuffers(1,              &o9_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o9_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o9_INDICES), o9_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
