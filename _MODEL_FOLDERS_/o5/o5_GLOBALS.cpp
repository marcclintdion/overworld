GLfloat o5_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o5_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o5_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o5_VBO; 
GLuint o5_INDICES_VBO; 
//--------------------------------------
GLuint o5_EMIT; 
GLuint o5_DOT3; 
GLuint o5_SKY; 

GLuint o5_MASK0; 

//---------------------------------------------
GLfloat o5_boundingBox[6]; 


//---------------------------------------------
GLuint o5_INDEX_COUNT;    


GLuint o5_modelNumber;    


void load_o5_VBO(void)           
{
    #include    "o5_VBO.cpp"           
    glGenBuffers(1,              &o5_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o5_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o5), o5, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o5_INDICES(void)           
{
    #include    "o5_INDICES.cpp"           
    glGenBuffers(1,              &o5_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o5_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o5_INDICES), o5_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
