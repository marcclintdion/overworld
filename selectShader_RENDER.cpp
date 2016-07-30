

void SelectShader(var shaderNumber)
{
    
    if(shaderNumber ==   10)
    {
        #include    "_SHADERS/finalComposite/finalComposite_SHADER_RENDER.cpp"
    }
    //-----------     
    if(shaderNumber ==   11)
    {
        #include    "_SHADERS/terrainBase/terrainBase_RENDER.cpp"
    }
    //-----------   



}
