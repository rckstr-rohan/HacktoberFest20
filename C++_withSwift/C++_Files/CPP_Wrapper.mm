//
//  CPP_Wrapper.m
//  C++_withSwift
//
//  Created by jagjeet on 22/06/20.
//  Copyright © 2020 jagjeet. All rights reserved.
//

// you need to change the .m extension to .mm extension for creating C++ implementation file
// this is implementation file where you wrap your CPP file.


#import "CPP_Wrapper.h"
#import "CPPTest.hpp"

@implementation CPP_Wrapper

-(void) wrapperFunction
{
    CPPTest cpp;        // creating instance of CPP CLASS
    cpp.CPPFunction();  // calling the function over here
    
}

@end

