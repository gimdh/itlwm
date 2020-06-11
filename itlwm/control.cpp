//
//  control.cpp
//  itlwm
//
//  Created by gimdh on 2020/06/10.
//  Copyright © 2020 钟先耀. All rights reserved.
//

#include "control.hpp"

#include <sys/kern_control.h>
#include <sys/kernel_types.h>
#include <itlwm.hpp>

errno_t EPHandleSet( kern_ctl_ref ctlref, unsigned int unit, void *userdata, int opt, void *data, size_t len )
{
    int error = EINVAL;

    switch (opt)
    {
        case COM_JOIN:               // program defined symbol
            error = 0;
            
            itlwm::joinSSID(const char *ssid_name, const char *ssid_pwd)

            break;

        default:
            break;
    }

    return error;

}
