GLfloat o6_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o6_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o6_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o6_VBO; 
GLuint o6_INDICES_VBO; 
//--------------------------------------
GLuint o6_EMIT; 
GLuint o6_DOT3; 
GLuint o6_SKY; 

GLuint o6_MASK0; 

//---------------------------------------------
GLfloat o6_boundingBox[6]; 


//---------------------------------------------
GLuint o6_INDEX_COUNT;    


GLuint o6_modelNumber;    


void load_o6_VBO(void)           
{
    #include    "o6_VBO.cpp"           
    glGenBuffers(1,              &o6_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o6_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o6), o6, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o6_INDICES(void)           
{
    #include    "o6_INDICES.cpp"           
    glGenBuffers(1,              &o6_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o6_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o6_INDICES), o6_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
