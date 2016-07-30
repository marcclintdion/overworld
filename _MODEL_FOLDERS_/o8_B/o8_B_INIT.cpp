#include "o8_B_END.cpp"   
//=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
//=========================================================
#if  TARGET_OS_IPHONE == 1 || TARGET_IPHONE_SIMULATOR == 1 
//=========================================================
    //---------
    spriteImage             = [UIImage imageNamed:@"o8_B_EMIT.png"].CGImage ; 
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
        glGenTextures(1, &o8_B_EMIT);  
        glBindTexture(GL_TEXTURE_2D, o8_B_EMIT);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o8_B_DOT3.png"].CGImage ; 
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
        glGenTextures(1, &o8_B_DOT3);  
        glBindTexture(GL_TEXTURE_2D, o8_B_DOT3);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
    //---------
    spriteImage             = [UIImage imageNamed:@"o8_B_MASK0.png"].CGImage ; 
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
        glGenTextures(1, &o8_B_MASK0);  
        glBindTexture(GL_TEXTURE_2D, o8_B_MASK0);   
        ConfigureAndLoadTexture(spriteData,  width, height); 
        if(spriteData != NULL) 
        { 
            free(spriteData); 
        } 
//=========================================
#elif TARGET_OS_MAC == 1 || WIN32 == 1 
//=========================================
    glGenTextures( 1, &o8_B_EMIT);
    glBindTexture( GL_TEXTURE_2D, o8_B_EMIT);
    loadTexture("_MODEL_FOLDERS_/o8_B/o8_B_EMIT.png"); 

    glGenTextures( 1, &o8_B_DOT3); 
    glBindTexture( GL_TEXTURE_2D, o8_B_DOT3);
    loadTexture("_MODEL_FOLDERS_/o8_B/o8_B_DOT3.png"); 

    glGenTextures( 1, &o8_B_SKY);
    glBindTexture( GL_TEXTURE_2D, o8_B_SKY);
    loadTexture("_MODEL_FOLDERS_/o8_B/o8_B_SKY.png"); 

    glGenTextures( 1, &o8_B_MASK0 );
    glBindTexture( GL_TEXTURE_2D, o8_B_MASK0);
    loadTexture("_MODEL_FOLDERS_/o8_B/o8_B_MASK0.png"); 

#endif 

load_o8_B_VBO();

load_o8_B_INDICES();

    o8_B_boundingBox[0] = -142.737061f;   
    o8_B_boundingBox[1] =  0.000000f;  
    o8_B_boundingBox[2] = -17.304539f;   
    o8_B_boundingBox[3] =  17.003727f;  
    o8_B_boundingBox[4] = 0.000000f;   
    o8_B_boundingBox[5] =  16.143053f;  

    modelNumber += 1;

    o8_B_modelNumber = modelNumber;


