if(modelNumber  == o4_modelNumber)
{
    if(KEY_D &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_POSITION[0] += 0.11010;
    }
    if(KEY_A &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_POSITION[0] -= 0.11010;
    }
    if(KEY_W &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_POSITION[1] += 0.11010;
    }
    if(KEY_S &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_POSITION[1] -= 0.11010;
    }
    if(KEY_E &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_POSITION[2] += 0.11010;
    }
    if(KEY_Q &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_POSITION[2] -= 0.11010;
    }
    if(KEY_D && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[0] += 0.011010;
    }
    if(KEY_A && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[0] -= 0.011010;
    }
    if(KEY_W && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[1] += 0.011010;
    }
    if(KEY_S && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[1] -= 0.011010;
    }
    if(KEY_E && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[2] += 0.011010;
    }
    if(KEY_Q && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[2] -= 0.011010;
    }
    if(KEY_X && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[3] += 0.51010;
    }
    if(KEY_Z && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o4_ROTATION[3] -= 0.51010;
    }
    if(KEY_D &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o4_SCALE[0] += 0.0011010;
    }
    if(KEY_A &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o4_SCALE[0] -= 0.0011010;
    }
    if(KEY_W &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o4_SCALE[1] += 0.0011010;
    }
    if(KEY_S &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o4_SCALE[1] -= 0.0011010;
    }
    if(KEY_E &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o4_SCALE[2] += 0.0011010;
    }
    if(KEY_Q &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o4_SCALE[2] -= 0.0011010;
    }
    if(CONSOLE_OUTPUT)
    {
    #ifdef __APPLE__
    NSLog(@"o4_POSITION[] =   %f, %f, %f   ",     o4_POSITION[0], o4_POSITION[1], o4_POSITION[2] );
    NSLog(@"o4_ROTATION[] =  %f, %f, %f, %f ", o4_ROTATION[0], o4_ROTATION[1], o4_ROTATION[2], o4_ROTATION[3] );
    NSLog(@"o4_SCALE[] =  %f, %f, %f ",        o4_SCALE[0],    o4_SCALE[1],    o4_SCALE[2] );
    #endif
    }
}
