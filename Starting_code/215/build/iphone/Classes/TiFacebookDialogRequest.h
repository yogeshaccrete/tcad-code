/**
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2011 by k215, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 * 
 * WARNING: This is generated code. Modify at your own risk and without support.
 */
#ifdef USE_TI_FACEBOOK
#import "FBConnect/Facebook.h"
#import "FacebookModule.h"
#import "KrollCallback.h"

@interface TiFacebookDialogRequest : NSObject <FBDialogDelegate2> {

	KrollCallback *callback;
	FacebookModule *module;
}

-(id)initWithCallback:(KrollCallback*)callback_ module:(FacebookModule*)module_;

@end
#endif