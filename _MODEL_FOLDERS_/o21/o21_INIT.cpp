#include "o21_END.cpp"   
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=========================================================
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1 
//=========================================================
    //---------
    spriteImage             = [UIImage imageNamed:@"o21_EMIT.png"].CGImage ; 
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
        glGenTextures(1, &o21_EMIT);  
        glBindTexture(GL_TEXTURE_2D, o21_EMIT);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o21_DOT3.png"].CGImage ; 
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
        glGenTextures(1, &o21_DOT3);  
        glBindTexture(GL_TEXTURE_2D, o21_DOT3);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o21_MASK0.png"].CGImage ; 
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
        glGenTextures(1, &o21_MASK0);  
        glBindTexture(GL_TEXTURE_2D, o21_MASK0);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
//=========================================
#elif TARGET_OS_MAC == 1 || WIN32 == 1 
//=========================================
    glGenTextures( 1, &o21_EMIT);
    glBindTexture( GL_TEXTURE_2D, o21_EMIT);
    loadTexture("_MODEL_FOLDERS_/o21/o21_EMIT.png"); 

    glGenTextures( 1, &o21_DOT3); 
    glBindTexture( GL_TEXTURE_2D, o21_DOT3);
    loadTexture("_MODEL_FOLDERS_/o21/o21_DOT3.png"); 

    glGenTextures( 1, &o21_SKY);
    glBindTexture( GL_TEXTURE_2D, o21_SKY);
    loadTexture("_MODEL_FOLDERS_/o21/o21_SKY.png"); 

    glGenTextures( 1, &o21_MASK0 );
    glBindTexture( GL_TEXTURE_2D, o21_MASK0);
    loadTexture("_MODEL_FOLDERS_/o21/o21_MASK0.png"); 

#endif 

load_o21_VBO();

load_o21_INDICES();

    o21_boundingBox[0] = 0.000000f;   
    o21_boundingBox[1] =  141.342255f;  
    o21_boundingBox[2] = -49.942818f;   
    o21_boundingBox[3] =  0.000000f;  
    o21_boundingBox[4] = -0.675137f;   
    o21_boundingBox[5] =  7.627766f;  

    modelNumber += 1;

    o21_modelNumber = modelNumber;

