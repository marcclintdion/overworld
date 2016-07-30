#include "o4_END.cpp"   
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=========================================================
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1 
//=========================================================
    //---------
    spriteImage             = [UIImage imageNamed:@"o4_EMIT.png"].CGImage ; 
    width                   =  CGImageGetWidth(spriteImage); 
    height                  =  CGImageGetHeight(spriteImage);  
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
    spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
    CGContextRelease(spriteContext); 
        //----------- 
        glGenTextures(1, &o4_EMIT);  
        glBindTexture(GL_TEXTURE_2D, o4_EMIT);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o4_DOT3.png"].CGImage ; 
    width                   =  CGImageGetWidth(spriteImage); 
    height                  =  CGImageGetHeight(spriteImage);  
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
    spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
    CGContextRelease(spriteContext); 
        //-----------
        glGenTextures(1, &o4_DOT3);  
        glBindTexture(GL_TEXTURE_2D, o4_DOT3);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o4_MASK0.png"].CGImage ; 
    width                   =  CGImageGetWidth(spriteImage); 
    height                  =  CGImageGetHeight(spriteImage);  
    spriteData              = (GLubyte *) calloc(width*height*4, sizeof(GLubyte));  
    spriteContext           =  CGBitmapContextCreate(spriteData, width, height, 8, width * 4, CGImageGetColorSpace(spriteImage), kCGImageAlphaNoneSkipLast);  
    CGContextSetBlendMode(spriteContext, kCGBlendModeCopy); 
    CGContextTranslateCTM (spriteContext, 0, (float)height);//--FLIP_Y_AXIS 
    CGContextScaleCTM (spriteContext, 1.0, -1.0);           //--FLIP_Y_AXIS 
    CGContextDrawImage(spriteContext,  CGRectMake(0, 0, width, height), spriteImage);  
    CGContextRelease(spriteContext); 
        //----------- 
        glGenTextures(1, &o4_MASK0);  
        glBindTexture(GL_TEXTURE_2D, o4_MASK0);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
//=========================================
#elif TARGET_OS_MAC == 1 || WIN32 == 1 
//=========================================
    glGenTextures( 1, &o4_EMIT);
    glBindTexture( GL_TEXTURE_2D, o4_EMIT);
    loadTexture("_MODEL_FOLDERS_/o4/o4_EMIT.png"); 

    glGenTextures( 1, &o4_DOT3); 
    glBindTexture( GL_TEXTURE_2D, o4_DOT3);
    loadTexture("_MODEL_FOLDERS_/o4/o4_DOT3.png"); 

    glGenTextures( 1, &o4_SKY);
    glBindTexture( GL_TEXTURE_2D, o4_SKY);
    loadTexture("_MODEL_FOLDERS_/o4/o4_SKY.png"); 

    glGenTextures( 1, &o4_MASK0 );
    glBindTexture( GL_TEXTURE_2D, o4_MASK0);
    loadTexture("_MODEL_FOLDERS_/o4/o4_MASK0.png"); 

#endif 

load_o4_VBO();

load_o4_INDICES();

    o4_boundingBox[0] = -21.399315f;   
    o4_boundingBox[1] =  20.819580f;  
    o4_boundingBox[2] = 0.000000f;   
    o4_boundingBox[3] =  50.486382f;  
    o4_boundingBox[4] = 0.000000f;   
    o4_boundingBox[5] =  26.117451f;  

    modelNumber += 1;

    o4_modelNumber = modelNumber;


