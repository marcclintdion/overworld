GLfloat o4_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o4_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o4_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o4_VBO; 
GLuint o4_INDICES_VBO; 
//--------------------------------------
GLuint o4_EMIT; 
GLuint o4_DOT3; 
GLuint o4_SKY; 

GLuint o4_MASK0; 

//---------------------------------------------
GLfloat o4_boundingBox[6]; 


//---------------------------------------------
GLuint o4_INDEX_COUNT;    


GLuint o4_modelNumber;    


void load_o4_VBO(void)           
{
    #include    "o4_VBO.cpp"           
    glGenBuffers(1,              &o4_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o4_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o4), o4, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o4_INDICES(void)           
{
    #include    "o4_INDICES.cpp"           
    glGenBuffers(1,              &o4_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o4_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o4_INDICES), o4_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
