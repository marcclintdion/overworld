GLfloat o20_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o20_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o20_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o20_VBO; 
GLuint o20_INDICES_VBO; 
//--------------------------------------
GLuint o20_EMIT; 
GLuint o20_DOT3; 
GLuint o20_SKY; 

GLuint o20_MASK0; 

//---------------------------------------------
GLfloat o20_boundingBox[6]; 


//---------------------------------------------
GLuint o20_INDEX_COUNT;    


GLuint o20_modelNumber;    


void load_o20_VBO(void)           
{
    #include    "o20_VBO.cpp"           
    glGenBuffers(1,              &o20_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o20_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o20), o20, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o20_INDICES(void)           
{
    #include    "o20_INDICES.cpp"           
    glGenBuffers(1,              &o20_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o20_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o20_INDICES), o20_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
