/* 
 * File:   Module.h
 * Author: Sai Manoj Kumar Yadlapati
 *
 * Created on September 18, 2011, 6:20 PM
 */

#ifndef MODULE_H
#define	MODULE_H

class Module {
public:

    virtual void Initialize() = 0;
    virtual Module* Execute() = 0;
    virtual void Shutdown() = 0;


};

extern Module* lastMod;

#endif	/* MODULE_H */
