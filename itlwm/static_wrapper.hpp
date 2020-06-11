//
//  static_wrapper.h
//  itlwm
//
//  Created by gimdh on 2020/06/10.
//  Copyright © 2020 钟先耀. All rights reserved.
//

#ifndef static_wrapper_h
#define static_wrapper_h

#include "itlwm.hpp"

class KernConHandler {
public:
    static itlwm *instance;

    static void set_instance(itlwm *instance_) {
        instance = instance_;
    }
    
    static errno_t EPHandleSet(kern_ctl_ref ctlref, unsigned int unit, void *userdata, int opt, void *data, size_t len) {
        return instance->EPHandleSet(ctlref, unit, userdata, opt, data, len);
    }
    static errno_t EPHandleGet(kern_ctl_ref ctlref, unsigned int unit, void *userdata, int opt, void *data, size_t *len) {
        return instance->EPHandleGet(ctlref, unit, userdata, opt, data, len);
    }
    static errno_t EPHandleConnect(kern_ctl_ref ctlref, struct sockaddr_ctl *sac, void **unitinfo) {
        return instance->EPHandleConnect(ctlref, sac, unitinfo);
    }
    static errno_t EPHandleDisconnect(kern_ctl_ref ctlref, unsigned int unit, void *unitinfo) {
        return instance->EPHandleDisconnect(ctlref, unit, unitinfo);
    }
    static errno_t EPHandleWrite(kern_ctl_ref ctlref, unsigned int unit, void *userdata, mbuf_t m, int flags) {
        return instance->EPHandleWrite(ctlref, unit, userdata, m, flags);
    }
};

itlwm *KernConHandler::instance = 0;


#endif /* static_wrapper_h */
