GLfloat o19_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o19_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o19_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o19_VBO; 
GLuint o19_INDICES_VBO; 
//--------------------------------------
GLuint o19_EMIT; 
GLuint o19_DOT3; 
GLuint o19_SKY; 

GLuint o19_MASK0; 

//---------------------------------------------
GLfloat o19_boundingBox[6]; 


//---------------------------------------------
GLuint o19_INDEX_COUNT;    


GLuint o19_modelNumber;    


void load_o19_VBO(void)           
{
    #include    "o19_VBO.cpp"           
    glGenBuffers(1,              &o19_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o19_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o19), o19, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o19_INDICES(void)           
{
    #include    "o19_INDICES.cpp"           
    glGenBuffers(1,              &o19_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o19_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o19_INDICES), o19_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
