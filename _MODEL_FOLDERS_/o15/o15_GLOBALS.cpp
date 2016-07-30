GLfloat o15_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o15_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o15_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o15_VBO; 
GLuint o15_INDICES_VBO; 
//--------------------------------------
GLuint o15_EMIT; 
GLuint o15_DOT3; 
GLuint o15_SKY; 

GLuint o15_MASK0; 

//---------------------------------------------
GLfloat o15_boundingBox[6]; 


//---------------------------------------------
GLuint o15_INDEX_COUNT;    


GLuint o15_modelNumber;    


void load_o15_VBO(void)           
{
    #include    "o15_VBO.cpp"           
    glGenBuffers(1,              &o15_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o15_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o15), o15, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o15_INDICES(void)           
{
    #include    "o15_INDICES.cpp"           
    glGenBuffers(1,              &o15_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o15_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o15_INDICES), o15_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
