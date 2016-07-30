GLfloat o18_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o18_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o18_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o18_VBO; 
GLuint o18_INDICES_VBO; 
//--------------------------------------
GLuint o18_EMIT; 
GLuint o18_DOT3; 
GLuint o18_SKY; 

GLuint o18_MASK0; 

//---------------------------------------------
GLfloat o18_boundingBox[6]; 


//---------------------------------------------
GLuint o18_INDEX_COUNT;    


GLuint o18_modelNumber;    


void load_o18_VBO(void)           
{
    #include    "o18_VBO.cpp"           
    glGenBuffers(1,              &o18_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o18_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o18), o18, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o18_INDICES(void)           
{
    #include    "o18_INDICES.cpp"           
    glGenBuffers(1,              &o18_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o18_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o18_INDICES), o18_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
