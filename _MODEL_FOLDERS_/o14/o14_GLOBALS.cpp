GLfloat o14_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o14_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o14_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o14_VBO; 
GLuint o14_INDICES_VBO; 
//--------------------------------------
GLuint o14_EMIT; 
GLuint o14_DOT3; 
GLuint o14_SKY; 

GLuint o14_MASK0; 

//---------------------------------------------
GLfloat o14_boundingBox[6]; 


//---------------------------------------------
GLuint o14_INDEX_COUNT;    


GLuint o14_modelNumber;    


void load_o14_VBO(void)           
{
    #include    "o14_VBO.cpp"           
    glGenBuffers(1,              &o14_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o14_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o14), o14, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o14_INDICES(void)           
{
    #include    "o14_INDICES.cpp"           
    glGenBuffers(1,              &o14_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o14_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o14_INDICES), o14_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
