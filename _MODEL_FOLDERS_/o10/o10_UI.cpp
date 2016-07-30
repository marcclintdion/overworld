if(modelNumber  == o10_modelNumber)
{
    if(KEY_D &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_POSITION[0] += 0.11010;
    }
    if(KEY_A &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_POSITION[0] -= 0.11010;
    }
    if(KEY_W &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_POSITION[1] += 0.11010;
    }
    if(KEY_S &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_POSITION[1] -= 0.11010;
    }
    if(KEY_E &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_POSITION[2] += 0.11010;
    }
    if(KEY_Q &! KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_POSITION[2] -= 0.11010;
    }
    if(KEY_D && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[0] += 0.011010;
    }
    if(KEY_A && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[0] -= 0.011010;
    }
    if(KEY_W && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[1] += 0.011010;
    }
    if(KEY_S && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[1] -= 0.011010;
    }
    if(KEY_E && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[2] += 0.011010;
    }
    if(KEY_Q && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[2] -= 0.011010;
    }
    if(KEY_X && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[3] += 0.51010;
    }
    if(KEY_Z && KEY_CTRL_L &! KEY_SHIFT_L)
    {
        o10_ROTATION[3] -= 0.51010;
    }
    if(KEY_D &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o10_SCALE[0] += 0.0011010;
    }
    if(KEY_A &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o10_SCALE[0] -= 0.0011010;
    }
    if(KEY_W &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o10_SCALE[1] += 0.0011010;
    }
    if(KEY_S &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o10_SCALE[1] -= 0.0011010;
    }
    if(KEY_E &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o10_SCALE[2] += 0.0011010;
    }
    if(KEY_Q &! KEY_CTRL_L && KEY_SHIFT_L)
    {
        o10_SCALE[2] -= 0.0011010;
    }
    if(CONSOLE_OUTPUT)
    {
    #ifdef __APPLE__
    NSLog(@"o10_POSITION[] =   %f, %f, %f   ",     o10_POSITION[0], o10_POSITION[1], o10_POSITION[2] );
    NSLog(@"o10_ROTATION[] =  %f, %f, %f, %f ", o10_ROTATION[0], o10_ROTATION[1], o10_ROTATION[2], o10_ROTATION[3] );
    NSLog(@"o10_SCALE[] =  %f, %f, %f ",        o10_SCALE[0],    o10_SCALE[1],    o10_SCALE[2] );
    #endif
    }
}
