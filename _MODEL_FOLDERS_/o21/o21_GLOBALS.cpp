GLfloat o21_POSITION[]             = { 0.000000f, 0.000000f, 0.000000f, 1.0 }; 
GLfloat o21_ROTATION[]             = { 0.0, 0.0, 1.0, 0.0 }; 
GLfloat o21_SCALE[]                = { 1.000000f, 1.000000f, 1.000000f, 1.0 }; 
//--------------------------------------
GLuint o21_VBO; 
GLuint o21_INDICES_VBO; 
//--------------------------------------
GLuint o21_EMIT; 
GLuint o21_DOT3; 
GLuint o21_SKY; 

GLuint o21_MASK0; 

//---------------------------------------------
GLfloat o21_boundingBox[6]; 


//---------------------------------------------
GLuint o21_INDEX_COUNT;    


GLuint o21_modelNumber;    


void load_o21_VBO(void)           
{
    #include    "o21_VBO.cpp"           
    glGenBuffers(1,              &o21_VBO);    
    glBindBuffer(GL_ARRAY_BUFFER, o21_VBO);       
    glBufferData(GL_ARRAY_BUFFER, sizeof(o21), o21, GL_STATIC_DRAW);      
    glBindBuffer(GL_ARRAY_BUFFER, 0);

}
void load_o21_INDICES(void)           
{
    #include    "o21_INDICES.cpp"           
    glGenBuffers(1,              &o21_INDICES_VBO);    
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, o21_INDICES_VBO);       
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(o21_INDICES), o21_INDICES, GL_STATIC_DRAW);      
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);
}
